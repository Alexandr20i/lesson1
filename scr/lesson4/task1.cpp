#include <iostream>

using namespace std;

int main() {
    int year;
    cout << "Введите год: ";
    cin >> year;
    cout << ((year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? "Год високосный" : "Год не високосный") << endl;
    return 0;
}