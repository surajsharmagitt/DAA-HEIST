#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

struct Item { double weight, profit; };

bool byRatio(Item x, Item y) {
    return x.profit / x.weight > y.profit / y.weight;
}

int main() {
    int n; double capacity;
    cin >> n >> capacity;
    vector<Item> a(n);
    for (int i = 0; i < n; i++) {
        Item &x = a[i];
        cin >> x.weight >> x.profit;
        if (x.weight <= 0) return cout << "Invalid weight\n", 0;
    }
    sort(a.begin(), a.end(), byRatio);
    double total = 0;
    for (int i = 0; i < n; i++) {
        Item x = a[i];
        double take = min(capacity, x.weight);
        total += take * x.profit / x.weight;
        capacity -= take;
        if (capacity <= 0) break;
    }
    cout << fixed << setprecision(2) << "Maximum profit: " << total << '\n';
}
