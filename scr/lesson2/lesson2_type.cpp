#include <iostream>
#include <locale>  
using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");

    cout << "1 Задание: определение размера типов данных" << endl;
    // byte t1 = 'a';


    // cout << "byte: " << sizeof(byte) << endl;
    cout << "short: " << sizeof(short) << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << endl;
    cout << "long: " << sizeof(long) << endl;

    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;

    cout << "char: " << sizeof(char) << endl;

    cout << "bool: " << sizeof(bool) << endl;

    // cout << pow(2,10) << endl;
    return 0;
}