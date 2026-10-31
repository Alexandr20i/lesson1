#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    cout << "Написать программу, которая считывает с клавиатуры два значения в сантиметрах (значения могут быть дробными / не целыми) и сравнивает их\n" << endl;

    double x;
    double y;

    cout << "Введите первое значение x в сантиметрах: ";
    cin >> x;

    cout << "Введите второе значение y в сантиметрах: ";
    cin >> y;

    cout <<  "Флаг равенства: " << (abs(x-y) < 0.0000001) << endl;
    cout <<  "Флаг x > y: " << (x > y) << endl;
    cout <<  "Флаг x < y: " << (x < y) << endl;


}