#ifndef BASKET_HASH
#define BASKET_HASH

#include "immintrin.h"
#include <vector>
#include <deque>
#include <utility>
#include <stdexcept>
#include <type_traits>
#include <climits>
#include <functional>
#include <cstddef>


#define MAXN 1073741824


// crossplatform MapMemoryView
#include <stddef.h>
#if defined(_WIN32) || defined(_WIN64)
    #define OS_WINDOWS 1
    #include <windows.h>
#else
    #define OS_POSIX 1
    #include <sys/mman.h>
    #include <unistd.h>
#endif
void* virtual_reserve(size_t size) 
{
#if defined(_WIN32) || defined(_WIN64)
    return VirtualAlloc(NULL, size, MEM_RESERVE, PAGE_NOACCESS);
#else
    void* ptr = mmap(NULL, size, PROT_NONE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
    return (ptr == MAP_FAILED) ? NULL : ptr;
#endif
}
bool virtual_commit(void* addr, size_t size) 
{
#if defined(_WIN32) || defined(_WIN64)
    return VirtualAlloc(addr, size, MEM_COMMIT, PAGE_READWRITE) != NULL;
#else
    return mprotect(addr, size, PROT_READ | PROT_WRITE) == 0;
#endif
}
void virtual_free(void* addr, size_t size) 
{
#if defined(_WIN32) || defined(_WIN64)
    (void)size;
    VirtualFree(addr, 0, MEM_RELEASE); 
#else
    munmap(addr, size);
#endif
}




enum MapFlags : uint64_t {
    NONE = 0,
    STORE_HASH = 1,
    
    DEFAULT = 0,
};


struct EmptyHashStorage
{
};

struct HashStorage { 
    uint64_t* hashes = nullptr; 
};

template <
    typename Key, 
    typename Value,
    typename Hasher = std::hash<Key>,
    typename KeyEqual = std::equal_to<Key>,
    uint64_t Flags = DEFAULT,
    typename HashProbeType = uint8_t
>
class basketball : public std::conditional_t<(Flags & STORE_HASH) != 0, HashStorage, EmptyHashStorage>
{
public:
    basketball()
    {
        data = (MegaBasket *)virtual_reserve(sizeof(*data) * MAXN);
        virtual_commit((void *)data, sizeof(*data) * 16);
        
        count = 0;
        table_size = 16;
    }
    
    ~basketball() 
    {
        virtual_free((void *)data, sizeof(*data) * MAXN);
    }

private:
    enum class BasketState { EMPTY, FILLED, DELETED };

    static constexpr int ProbeBasketSize = 32/sizeof(HashProbeType);
    static constexpr double MAX_LOAD_FACTOR = 0.5;
    
    static_assert(sizeof(HashProbeType) <= 32);

    struct alignas(64) BaseMegaBasket 
    {
        HashProbeType probes[ProbeBasketSize];
        Key keys[32];
        Value values[32];
    };

    struct MegaHashExtension : public BaseMegaBasket
    {
        uint64_t hashes[32];
    };

    using MegaBasket = std::conditional_t<(Flags & STORE_HASH) != 0, MegaHashExtension, BaseMegaBasket>;
    
    uint64_t table_size = 0;
    uint64_t count = 0;
    MegaBasket *data;

    uint64_t linear_size() const
    {
        return table_size * ProbeBasketSize;
    }
    
    uint64_t table_mask() const
    {
        return table_size - 1;
    }

    inline HashProbeType GetProbe(uint64_t hash)
    {
        HashProbeType res = hash >> (64-sizeof(HashProbeType)*CHAR_BIT);
        return res == 0 ? 1 : res;
    }

    inline void SetCell(uint64_t i, uint64_t t, const Key &key, const Value &value, uint64_t hash)
    {
        if constexpr (Flags & STORE_HASH)
        {
            data[i].hashes[t] = hash;
        }
        data[i].keys[t] = key;
        data[i].values[t] = value;
        data[i].probes[t] = GetProbe(hash);
    }

    uint64_t GetFirstEmptyProbe(uint64_t i)
    {
        __m256i bucket_vector = _mm256_loadu_si256((__m256i *)data[i].probes);
        __m256i cmp_zero = _mm256_cmpeq_epi8(bucket_vector, _mm256_setzero_si256());
        uint32_t empty_mask = static_cast<uint32_t>(_mm256_movemask_epi8(cmp_zero));
        return _tzcnt_u32(empty_mask);
    }

    void grow_up()
    {        
        uint64_t old_table_size = table_size;
        table_size *= 2;
        
        virtual_commit(data, sizeof(*data) * table_size);

        for (uint64_t i = 0; i < old_table_size; ++i)
        {
            if constexpr (Flags & STORE_HASH)
            {
                for (uint64_t t = 0; t < ProbeBasketSize; ++t)
                {
                    uint64_t hash = data[i].hashes[t];
                    if (hash & old_table_size)
                    {
                        uint64_t dest_t = GetFirstEmptyProbe(old_table_size + i);
                        SetCell(old_table_size + i, dest_t, data[i].keys[t], data[i].values[t], hash);
                        data[i].probes[t] = 0;
                        data[i].hashes[t] = 0;
                    }
                }
            }
            else
            {
                for (uint64_t t = 0; t < ProbeBasketSize; ++t)
                {
                    if (data[i].probes[t])
                    {
                        uint64_t hash = Hasher{}(data[i].keys[t]);
                        if (hash & old_table_size)
                        {
                            uint64_t dest_t = GetFirstEmptyProbe(old_table_size + i);
                            SetCell(old_table_size + i, dest_t, data[i].keys[t], data[i].values[t], hash);
                            data[i].probes[t] = 0;
                        }
                    }
                }
            }
        }
    }
public:

    bool insert(const Key &key, const Value &value)
    {
        uint64_t old_count = count;
        (void)ptr_insert(key, value);
        return old_count != count;
    }
    

    Value *ptr_insert(const Key &key, const Value &value)
    {
        uint64_t hash = Hasher{}(key);


        HashProbeType probe = GetProbe(hash);
        __m256i vprobe = _mm256_set1_epi8((char)probe);
        
        // repeat insertion while it isn't successiful
        while (true)
        {
            uint64_t i = hash & table_mask();
            
            _mm_prefetch((const char *)&data[i].keys, _MM_HINT_T0);

            __m256i bucket_vector = _mm256_loadu_si256((__m256i *)data[i].probes);

            __m256i cmp_match = _mm256_cmpeq_epi8(bucket_vector, vprobe);
            __m256i cmp_zero  = _mm256_cmpeq_epi8(bucket_vector, _mm256_setzero_si256());
            
            uint32_t match_mask = (uint32_t)_mm256_movemask_epi8(cmp_match);
            uint32_t empty_mask = (uint32_t)_mm256_movemask_epi8(cmp_zero);

            if constexpr ((Flags & STORE_HASH) != 0)
            {
                uint32_t mask = match_mask;
                while (mask != 0)
                {
                    uint64_t t = _tzcnt_u32(mask);
                    
                    uint64_t it_hash = data[i].hashes[t];
                    if (it_hash == hash && KeyEqual{}(data[i].keys[t], key))
                    {
                        return data[i].values + t;
                    }
                    mask &= mask - 1;
                }

                uint64_t first_empty_t = _tzcnt_u32(empty_mask);
                if (first_empty_t < ProbeBasketSize)
                {
                    SetCell(i, first_empty_t, key, value, hash);
                    count++;
                    return data[i].values + first_empty_t;
                }
            }
            else
            {
                uint32_t mask = match_mask;
                while (mask != 0)
                {
                    uint64_t t = _tzcnt_u32(mask);
                    
                    if (KeyEqual{}(data[i].keys[t], key))
                    {
                        return data[i].values + t;
                    }
                    mask &= mask - 1;
                }

                uint64_t first_empty_t = _tzcnt_u32(empty_mask);
                if (first_empty_t < ProbeBasketSize)
                {
                    SetCell(i, first_empty_t, key, value, hash);
                    count++;
                    return data[i].values + first_empty_t;
                }
            }
            
            grow_up();
        }
    }


    Value* find(const Key& key) 
    {
        uint64_t hash = Hasher{}(key);
        uint64_t i = hash & table_mask();
        
        HashProbeType probe = GetProbe(hash);
        
        __m256i vprobe = _mm256_set1_epi8((char)probe);

        __m256i bucket_vector = _mm256_loadu_si256((const __m256i*)data[i].probes);
        __m256i cmp_match = _mm256_cmpeq_epi8(bucket_vector, vprobe);
        
        uint32_t match_mask = (uint32_t)_mm256_movemask_epi8(cmp_match);
        
        if constexpr (Flags & STORE_HASH)
        {
            uint32_t mask = match_mask;
            while (mask != 0)
            {
                uint64_t t = _tzcnt_u32(mask);
                
                uint64_t it_hash = data[i].hashes[t];
                if (it_hash == hash && KeyEqual{}(data[i].keys[t], key))
                {
                    return data[i].values + t;
                }

                mask &= mask - 1;
            }
        }
        else
        {
            uint32_t mask = match_mask;
            while (mask != 0)
            {
                uint64_t t = _tzcnt_u32(mask);
                
                if (KeyEqual{}(data[i].keys[t], key))
                {
                    return data[i].values + t;
                }

                mask &= mask - 1;
            }
        }
        return nullptr;
    }
    
    bool erase(const Key& key) 
    {
        uint64_t hash = Hasher{}(key);
        uint64_t i = hash & table_mask();
        
        _mm_prefetch((const char *)&data[i].keys, _MM_HINT_T0);
        
        HashProbeType probe = GetProbe(hash);
        
        __m256i vprobe = _mm256_set1_epi8((char)probe);

        __m256i bucket_vector = _mm256_loadu_si256((const __m256i*)data[i].probes);
        __m256i cmp_match = _mm256_cmpeq_epi8(bucket_vector, vprobe);
        
        uint32_t match_mask = (uint32_t)_mm256_movemask_epi8(cmp_match);
        
        if constexpr (Flags & STORE_HASH)
        {
            uint32_t mask = match_mask;
            while (mask != 0)
            {
                uint64_t t = _tzcnt_u32(mask);
                
                uint64_t it_hash = data[i].hashes[t];
                if (it_hash == hash && KeyEqual{}(data[i].keys[t], key))
                {
                    data[i].probes[t] = 0;
                    data[i].hashes[t] = 0;
                    count--;
                    return true;
                }
                mask &= mask - 1;
            }
        }
        else
        {
            uint32_t mask = match_mask;
            while (mask != 0)
            {
                uint64_t t = _tzcnt_u32(mask);
                
                if (KeyEqual{}(data[i].keys[t], key))
                {
                    data[i].probes[t] = 0;
                    count--;
                    return true;
                }
                mask &= mask - 1;
            }
        }
        return false;
    }


    Value& operator[](const Key& key) 
    {
        return *ptr_insert(key, Value());
    }

    uint64_t size() const { return count; }
    bool empty() const { return count == 0; }
    static constexpr Value *end() { return nullptr; }
};



#endif
