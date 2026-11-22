#include <bits/stdc++.h>
using namespace std;

struct Item { double weight, profit; };

int main() {
    int n; double capacity;
    cin >> n >> capacity;
    vector<Item> a(n);
    for (Item &x : a) {
        cin >> x.weight >> x.profit;
        if (x.weight <= 0) return cout << "Invalid weight\n", 0;
    }
    sort(a.begin(), a.end(), [](Item x, Item y) {
        return x.profit / x.weight > y.profit / y.weight;
    });
    double total = 0;
    for (Item x : a) {
        double take = min(capacity, x.weight);
        total += take * x.profit / x.weight;
        capacity -= take;
        if (capacity <= 0) break;
    }
    cout << fixed << setprecision(2) << "Maximum profit: " << total << '\n';
}
