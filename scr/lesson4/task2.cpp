# include <iostream>

using namespace std;

long long fib(int n){
    if (n <= 0)
        return 0;
    if (n == 1)
        return 1;

    int res = 0;
    int a = 0;
    int b = 1;

    for (int i = 2; i <= n; ++i){
        res = a + b;
        a = b;
        b = res;
    }
    return res;
}

long long fib_rec(long long a){
    if (a <= 0)
        return 0;
    if (a == 1)
        return 1;
    return fib_rec(a-1) + fib_rec(a-2);
}

long long fact(long long a){
    if (a < 0)
        return 0;
    if (a == 0 || a == 1)
        return 1;
    long long res = 1;
    while (a > 0) {
        res *= a;
        a--;
    }
    return res;
}

long long fact_rec(long long a){
    if (a < 1)
        return 0;
    if (a == 1 || a == 0)
        return 1;
    return a * fact_rec(a-1);
}

void delit(long long n){
    cout << "Для числа: " << n << endl; 
    for (int i = 1; i < sqrt(n); ++i){
        if (n % i == 0)
            cout << "Наименьший делитель: " << n / (n/i)  <<  "\t Наибольший делитель: " <<  n/i << endl;
    }
}

int main() {
    long long a = 36;
    cout << "Введите число: ";
    cin >> a;
    cout << "Факториал числа " << a << " равен: " << fact_rec(a) << endl;
    cout << "Число Фибоначи для числа " << a << " равно: " << fib(a) << endl;
    delit(36);
    return 0;
}