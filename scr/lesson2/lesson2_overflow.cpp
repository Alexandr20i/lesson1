#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "\nЗадание: переполнение для целочисленных типов\n" << endl;

    short a = 32767;
    cout << "до увеличения: a = " << a << endl;
    a++;
    cout << "после увеличения: a = " << a << endl;

    cout << "\nЗадание: потеря точности (float vs double)\n" << endl;
    float  f = 1.12345678901234567890;
    double d = 1.12345678901234567890;
    cout << "float: " << f << endl;
    cout << "double: " << d << endl;

    float c1 = 0.1;
    double c2 = 0.1;
    cout << "float c1: " << c1 << endl;
    cout << "double c2: " << c2 << endl;
    cout << "Разница: " << abs(c2 - c1) << endl;


    cout << "\nЗадание: auto использование\n" << endl;
    auto x = 1;
    auto y = 0.1;
    auto z = 'a';
    
    cout << "auto x: " << x << endl;
    cout << "auto y: " << y << endl;
    cout << "auto z: " << z << endl;

    x++;
    y++;
    z++;

    cout << "\nзначение переменных после увеличения++" << endl;

    cout << "auto x: " << typeid(x).name() << endl;
    cout << "auto y: " << typeid(y).name() << endl;
    cout << "auto z: " << typeid(z).name() << endl;

    return 0;
}