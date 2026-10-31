#include <iostream>
#include <cstdint> // Для uint8_t
#include <chrono>

using namespace std;
using namespace std::chrono;


int main() {
    setlocale(LC_ALL, "Russian");

    int N = 10000;
    int sum_adecvat = 0;
    int sum_debilno = 0;


    auto start_init = high_resolution_clock::now();

    // 1. Выделяем один большой массив в куче 
    uint8_t* A = new uint8_t[N * N];

    // 2. Заполняем массивы значениями
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            A[i * N + j] = 1;
        }
    }

    auto stop_init = high_resolution_clock::now();

    // вычисление суммы матриц обходом по строкам и столбцам

    auto start_sum_adecvat = high_resolution_clock::now();

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            sum_adecvat += A[i * N + j];
        }
    }

    auto stop_sum_adecvat = high_resolution_clock::now();

    // вычисление суммы матриц обходом по столбцам и строкам

    auto start_sum_debilno = high_resolution_clock::now();

    for (int j = 0; j < N; ++j) {
        for (int i = 0; i < N; ++i) {
            sum_debilno += A[i * N + j];
        }
    }

    auto stop_sum_debilno = high_resolution_clock::now();


    double time_in_seconds = duration_cast<duration<double>>(stop_init - start_init).count();
    double time_sum_adecvat = duration_cast<duration<double>>(stop_sum_adecvat - start_sum_adecvat).count();
    double time_sum_debilno = duration_cast<duration<double>>(stop_sum_debilno - start_sum_debilno).count();

    std::cout << "Время инициализации: " << time_in_seconds << " секунд" << std::endl;
    std::cout << "Сумма: " << sum_adecvat << ". Время вычисления суммы (адекватно): " << time_sum_adecvat << " секунд" << std::endl;
    std::cout << "Сумма: " << sum_debilno << ". Время вычисления суммы            : " << time_sum_debilno << " секунд" << std::endl;


    // Освобождаем память
    delete[] A;

    return 0;
}