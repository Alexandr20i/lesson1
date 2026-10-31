#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int age = 19;
    double total_sum = 11111;
    bool promokod = 1;
    bool block_account = 0;
    bool marked_goods = 1;
    double available_stock = 17;

    if (block_account) {
        cout << "Аккаунт заблокирован. Доступ запрещен." << endl;
        return 0;
    }

    else if (age < 18 && marked_goods) {
        cout << "Отказано. Вы должны быть старше 18 лет." << endl;
        return 0;
    }

    else if (available_stock <= 0) {
        cout << "Товара нет в наличии." << endl;
        return 0;
    }

    else {
        if (total_sum >= 10000) {
            total_sum = total_sum - (total_sum * 0.15);
            cout << "Вы получили скидку 15%. Итоговая сумма: " << total_sum << " руб." << endl;
        }
        else if (total_sum >= 5000 && promokod) {
            total_sum = total_sum - (total_sum * 0.1);
            cout << "Вы получили скидку 10% по промокоду. Итоговая сумма: " << total_sum << " руб." << endl;
        }
        else {
            cout << "Скидки нет. Итоговая сумма: " << total_sum << " руб." << endl;
        }
    }


    return 0;
    
}