#include "basket1.hpp"
#include <iostream>
#include <cassert>
#include <vector>
#include <unordered_map>
#include <chrono>
#include <random>

// Функция для замера времени
auto get_time() {
    return std::chrono::high_resolution_clock::now();
}

template <uint64_t TableFlags>
void run_realistic_test(const std::string& mode_name) {
    std::cout << "========================================" << std::endl;
    std::cout << "Запуск теста для режима: " << mode_name << std::endl;
    std::cout << "========================================" << std::endl;

    // Создаем таблицу и эталонную std::unordered_map для сверки
    basketball<int, int, std::hash<int>, TableFlags> table;
    std::unordered_map<int, int> reference;

    const int total_operations = 100000; // 100 тысяч элементов

    // 1. Тест вставки
    std::cout << "1. Вставка " << total_operations << " элементов... " << std::flush;
    auto start = get_time();
    for (int i = 0; i < total_operations; ++i) {
        int key = i;
        int value = i * 10;
        table.insert(key, value);
        reference[key] = value;
    }
    auto end = get_time();
    auto insert_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
    std::cout << "ОК (" << insert_ms << " мс)" << std::endl;

    // Проверяем размер
    assert(table.size() == reference.size());

    // 2. Тест поиска (успешного)
    std::cout << "2. Поиск существующих элементов... " << std::flush;
    start = get_time();
    for (int i = 0; i < total_operations; ++i) {
        int* found = table.find(i);
        if (found == nullptr || *found != i * 10) {
            std::cout << "\n[ОШИБКА] Не найден или испорчен элемент: " << i << std::endl;
            exit(1);
        }
    }
    end = get_time();
    auto find_success_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
    std::cout << "ОК (" << find_success_ms << " мс)" << std::endl;

    // 3. Тест поиска (несуществующих)
    std::cout << "3. Поиск отсутствующих элементов... " << std::flush;
    start = get_time();
    for (int i = total_operations; i < total_operations * 2; ++i) {
        int* found = table.find(i);
        if (found != nullptr) {
            std::cout << "\n[ОШИБКА] Таблица нашла несуществующий элемент: " << i << std::endl;
            exit(1);
        }
    }
    end = get_time();
    auto find_fail_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
    std::cout << "ОК (" << find_fail_ms << " мс)" << std::endl;

    // 4. Тест удаления половины элементов
    std::cout << "4. Удаление 50% элементов... " << std::flush;
    start = get_time();
    int erased_count = 0;
    for (int i = 0; i < total_operations; i += 2) { // удаляем каждый четный
        bool erased = table.erase(i);
        if (!erased) {
            std::cout << "\n[ОШИБКА] Не удалось удалить элемент: " << i << std::endl;
            exit(1);
        }
        reference.erase(i);
        erased_count++;
    }
    end = get_time();
    auto erase_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
    std::cout << "ОК (" << erase_ms << " мс)" << std::endl;

    // Проверяем размер после удаления
    assert(table.size() == reference.size());

    // 5. Проверка выживших элементов после удаления
    std::cout << "5. Проверка оставшихся элементов... " << std::flush;
    for (int i = 0; i < total_operations; ++i) {
        int* found = table.find(i);
        if (i % 2 == 0) {
            // Четные должны быть удалены
            assert(found == nullptr);
        } else {
            // Нечетные должны остаться
            if (found == nullptr || *found != i * 10) {
                std::cout << "\n[ОШИБКА] Оставшийся элемент " << i << " потерялся или испорчен после удаления других ячеек!" << std::endl;
                exit(1);
            }
        }
    }
    std::cout << "ОК" << std::endl;
    std::cout << "Все тесты для " << mode_name << " успешно пройдены!\n" << std::endl;
}

int main() {
    try {
        // Проверяем сначала режим без сохранения хэшей (вычисление на лету)
        run_realistic_test<NONE>("Flags = NONE");

        // Затем проверяем режим с сохранением хэшей (дополнительное поле в памяти)
        run_realistic_test<STORE_HASH>("Flags = STORE_HASH");

        std::cout << "========================================" << std::endl;
        std::cout << "[УСПЕХ] Таблица работает абсолютно корректно!" << std::endl;
        std::cout << "========================================" << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "\nТест упал с исключением: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "\nКритический краш (Segmentation Fault)!" << std::endl;
    }
    return 0;
}

