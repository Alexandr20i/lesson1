#include <iostream>
#include <vector>

using namespace std;

double CalculateTotal(const vector<double>& prices, const vector<int>& quantities, double (*calcLogic) (double, int)) {
    double totalSum = 0.0;

    for (size_t i = 0; i < prices.size(); ++i) {
        totalSum += calcLogic(prices[i], quantities[i]);
    }
    return totalSum;
}

int main() {
    int n;
    cout << "Сколько позиций вы хотите ввести? ";
    cin >> n;

    vector<double> prices(n);
    vector<int> quantities(n);

    for (int i = 0; i < n; ++i){
        cout << "Позиция " << i + 1 << " цена и количество через пробел: ";
        cin >> prices[i] >> quantities[i];
    }

    double total_sum = CalculateTotal(prices, quantities, [](double price, int quantity) {
        return price * quantity;
    });

    cout << "Итоговая сумма: " << total_sum << endl;

    return 0;
}