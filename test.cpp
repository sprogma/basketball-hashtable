#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <iomanip>
#include <unordered_map>
#include <string>
#include <cstring>
#include <cmath>

const size_t INSERT_COUNT = 1000000; 
const size_t LOOKUP_COUNT = 2000000;
const int RUNS_COUNT = 5; 

volatile int glb_bad = 0;


struct CStrHash {
    size_t operator()(const char* str) const noexcept {
        size_t hash = 2166136261U;
        while (*str) {
            hash ^= static_cast<size_t>(*str++);
            hash *= 16777619U;
        }
        return hash;
    }
};


struct CStrEq {
    bool operator()(const char* lhs, const char* rhs) const noexcept {
        return std::strcmp(lhs, rhs) == 0;
    }
};

#if defined(_WIN32) || defined(_WIN64)
#include <windows.h>
class Timer {
    LARGE_INTEGER frequency;
    LARGE_INTEGER start_time;
public:
    Timer() { QueryPerformanceFrequency(&frequency); }
    void start() { QueryPerformanceCounter(&start_time); }
    double stop() {
        LARGE_INTEGER end_time;
        QueryPerformanceCounter(&end_time);
        return static_cast<double>(end_time.QuadPart - start_time.QuadPart) * 1000.0 / frequency.QuadPart;
    }
};
#else
#include <time.h>
class Timer {
    struct timespec start_time;
public:
    void start() { clock_gettime(CLOCK_MONOTONIC, &start_time); }
    double stop() {
        struct timespec end_time;
        clock_gettime(CLOCK_MONOTONIC, &end_time);
        double start_ms = (start_time.tv_sec * 1000.0) + (start_time.tv_nsec / 1000000.0);
        double end_ms = (end_time.tv_sec * 1000.0) + (end_time.tv_nsec / 1000000.0);
        return end_ms - start_ms;
    }
};
#endif

using namespace std;


#ifndef __clang__
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
#endif


#ifdef BASKET1
#include "basket1.hpp"
#endif
#ifdef BASKET2
#include "basket2.hpp"
#endif
#ifdef BASKET3
#include "basket3.hpp"
#endif
#ifdef BASKET4
#include "basket4.hpp"
#endif
#ifdef BASKET5
#include "basket5.hpp"
#endif
#ifdef BASKET6
#include "basket6.hpp"
#endif
#ifdef BASKET7
#include "basket7.hpp"
#endif
#ifdef BASKET8
#include "basket8.hpp"
#endif

struct RawTestMetrics {
    vector<double> t1, t2, t3, t4, t5a, t5b;
    void reserve(size_t n) {
        t1.reserve(n); t2.reserve(n); t3.reserve(n); t4.reserve(n); t5a.reserve(n); t5b.reserve(n);
    }
};

struct StatResult {
    double mean;
    double confidence_error; 
};

struct FinalReport {
    StatResult t1, t2, t3, t4, t5a, t5b;
};


StatResult calculate_statistics(const vector<double>& sample) {
    double sum = 0.0;
    for (double v : sample) sum += v;
    double mean = sum / sample.size();

    double variance_sum = 0.0;
    for (double v : sample) variance_sum += (v - mean) * (v - mean);
    
    double std_dev = std::sqrt(variance_sum / (sample.size() - 1));
    double sem = std_dev / std::sqrt(sample.size());
    double error = 2.132 * sem; 

    return { mean, error };
}

vector<int> generate_random_keys(size_t count, int seed) {
    vector<int> keys(count);
    mt19937 gen(seed);
    uniform_int_distribution<int> dis(1, 100000000);
    for (size_t i = 0; i < count; ++i) keys[i] = dis(gen);
    return keys;
}

void run_int_iteration(RawTestMetrics& metrics) {
    auto insert_keys = generate_random_keys(INSERT_COUNT, rand());
    vector<int> missing_keys(LOOKUP_COUNT);
    for(size_t i = 0; i < LOOKUP_COUNT; ++i) missing_keys[i] = -(int)(i + 1);

    int bad = 0;
    Timer timer;

    #if defined(STOREHASH)
    TTT<int, int, std::hash<int>, std::equal_to<int>, STORE_HASH> map; 
    #else
    TTT<int, int> map;
    #endif
    
    timer.start();
    for (size_t i = 0; i < INSERT_COUNT; ++i) map[insert_keys[i]] = static_cast<int>(i);
    metrics.t1.push_back(timer.stop());

    timer.start();
    for (size_t i = 0; i < LOOKUP_COUNT; ++i) {
        if (map.find(insert_keys[i % INSERT_COUNT]) != map.end()) bad++;
    }
    metrics.t2.push_back(timer.stop());

    timer.start();
    for (size_t i = 0; i < LOOKUP_COUNT; ++i) {
        if (map.find(missing_keys[i]) == map.end()) bad++;
    }
    metrics.t3.push_back(timer.stop());

    timer.start();
    for (size_t i = 0; i < LOOKUP_COUNT; ++i) map[insert_keys[i % INSERT_COUNT]] += 1; 
    metrics.t4.push_back(timer.stop());

    size_t delete_count = INSERT_COUNT / 2;
    timer.start();
    for (size_t i = 0; i < delete_count; ++i) map.erase(insert_keys[i]);
    metrics.t5a.push_back(timer.stop());

    timer.start();
    for (size_t i = 0; i < LOOKUP_COUNT; ++i) {
        if (map.find(insert_keys[i % INSERT_COUNT]) != map.end()) bad++;
    }
    metrics.t5b.push_back(timer.stop());

    glb_bad += bad;
}

void run_string_iteration(RawTestMetrics& metrics, const vector<string>& ins_owner, const vector<string>& mis_owner) {
    vector<const char*> insert_keys(INSERT_COUNT);
    for(size_t i = 0; i < INSERT_COUNT; ++i) insert_keys[i] = ins_owner[i].c_str();

    vector<const char*> missing_keys(LOOKUP_COUNT);
    for(size_t i = 0; i < LOOKUP_COUNT; ++i) missing_keys[i] = mis_owner[i].c_str();

    int bad = 0;
    Timer timer;

    #if defined(STOREHASH)
    TTT<const char*, int, CStrHash, CStrEq, STORE_HASH> map; 
    #else
    TTT<const char*, int, CStrHash, CStrEq> map;
    #endif
    
    timer.start();
    for (size_t i = 0; i < INSERT_COUNT; ++i) map[insert_keys[i]] = static_cast<int>(i);
    metrics.t1.push_back(timer.stop());

    timer.start();
    for (size_t i = 0; i < LOOKUP_COUNT; ++i) {
        if (map.find(insert_keys[i % INSERT_COUNT]) != map.end()) bad++;
    }
    metrics.t2.push_back(timer.stop());

    timer.start();
    for (size_t i = 0; i < LOOKUP_COUNT; ++i) {
        if (map.find(missing_keys[i]) == map.end()) bad++;
    }
    metrics.t3.push_back(timer.stop());

    timer.start();
    for (size_t i = 0; i < LOOKUP_COUNT; ++i) map[insert_keys[i % INSERT_COUNT]] += 1; 
    metrics.t4.push_back(timer.stop());

    size_t delete_count = INSERT_COUNT / 2;
    timer.start();
    for (size_t i = 0; i < delete_count; ++i) map.erase(insert_keys[i]);
    metrics.t5a.push_back(timer.stop());

    timer.start();
    for (size_t i = 0; i < LOOKUP_COUNT; ++i) {
        if (map.find(insert_keys[i % INSERT_COUNT]) != map.end()) bad++;
    }
    metrics.t5b.push_back(timer.stop());

    glb_bad += bad;
}

void print_stat_cell(const StatResult& res) {
    cout << ";" << fixed << setprecision(2) << res.mean 
         << ";" << setprecision(2) << res.confidence_error;
}

int main() {
    
    vector<string> short_ins(INSERT_COUNT), short_mis(LOOKUP_COUNT);
    vector<string> long_ins(INSERT_COUNT), long_mis(LOOKUP_COUNT);
    string long_prefix(70, 'A'); 
    char buf[32];

    for(size_t i = 0; i < INSERT_COUNT; ++i) {
        snprintf(buf, sizeof(buf), "s_%lx", (unsigned long)i);
        short_ins[i] = buf;
        snprintf(buf, sizeof(buf), "_ins_%lx", (unsigned long)i);
        long_ins[i] = long_prefix + buf;
    }
    for(size_t i = 0; i < LOOKUP_COUNT; ++i) {
        snprintf(buf, sizeof(buf), "m_%lx", (unsigned long)i);
        short_mis[i] = buf;
        snprintf(buf, sizeof(buf), "_mis_%lx", (unsigned long)i);
        long_mis[i] = long_prefix + buf;
    }

    RawTestMetrics raw_int, raw_short, raw_long;
    raw_int.reserve(RUNS_COUNT); raw_short.reserve(RUNS_COUNT); raw_long.reserve(RUNS_COUNT);

    
    run_int_iteration(raw_int);
    raw_int.t1.clear(); raw_int.t2.clear(); raw_int.t3.clear(); 
    raw_int.t4.clear(); raw_int.t5a.clear(); raw_int.t5b.clear();

    
    for (int run = 0; run < RUNS_COUNT; ++run) {
        run_int_iteration(raw_int);
        run_string_iteration(raw_short, short_ins, short_mis);
        run_string_iteration(raw_long, long_ins, long_mis);
    }

    
    FinalReport rep_int =   { calculate_statistics(raw_int.t1),   calculate_statistics(raw_int.t2),   calculate_statistics(raw_int.t3),   calculate_statistics(raw_int.t4),   calculate_statistics(raw_int.t5a),   calculate_statistics(raw_int.t5b) };
    FinalReport rep_short = { calculate_statistics(raw_short.t1), calculate_statistics(raw_short.t2), calculate_statistics(raw_short.t3), calculate_statistics(raw_short.t4), calculate_statistics(raw_short.t5a), calculate_statistics(raw_short.t5b) };
    FinalReport rep_long =  { calculate_statistics(raw_long.t1),  calculate_statistics(raw_long.t2),  calculate_statistics(raw_long.t3),  calculate_statistics(raw_long.t4),  calculate_statistics(raw_long.t5a),  calculate_statistics(raw_long.t5b) };

    
    cout << "stage;int_mean;int_err;short_str_mean;short_str_err;long_str_mean;long_str_err\n";

    cout << "bulk_insertion"; print_stat_cell(rep_int.t1); print_stat_cell(rep_short.t1); print_stat_cell(rep_long.t1); cout << "\n";
    cout << "successful_lookups"; print_stat_cell(rep_int.t2); print_stat_cell(rep_short.t2); print_stat_cell(rep_long.t2); cout << "\n";
    cout << "unsuccessful_lookups"; print_stat_cell(rep_int.t3); print_stat_cell(rep_short.t3); print_stat_cell(rep_long.t3); cout << "\n";
    cout << "update_existing_keys"; print_stat_cell(rep_int.t4); print_stat_cell(rep_short.t4); print_stat_cell(rep_long.t4); cout << "\n";
    cout << "erasure"; print_stat_cell(rep_int.t5a); print_stat_cell(rep_short.t5a); print_stat_cell(rep_long.t5a); cout << "\n";
    cout << "lookups_after_erasure"; print_stat_cell(rep_int.t5b); print_stat_cell(rep_short.t5b); print_stat_cell(rep_long.t5b); cout << "\n";
    
    return glb_bad != 0;
}

