# include <iostream>
#include <chrono> // Подключаем библиотеку для работы со временем
// #include <string>


using namespace std::chrono; 
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    // 1. Засекаем время ДО начала работы
    auto start = high_resolution_clock::now();

    int data;
    // string name;
    char name[64];

    // int currentYear = year_month_day{floor<days>(system_clock::now())}.year();
    int currentYear = 2026;

    cout << "Введите ваше имя и год рождения: ";
    cin >> name >> data;
    cout << "Привет, " << name << "!" << endl << "Тебе " << data << " лет." << endl;

    // 2. Засекаем время ПОСЛЕ окончания работы
    auto stop = high_resolution_clock::now();

    // 3. Вычисляем разницу
    auto duration = duration_cast<milliseconds>(stop - start);

    cout << "Время выполнения: " << duration.count() << " миллисекунд" << endl;

    return 0;

}

