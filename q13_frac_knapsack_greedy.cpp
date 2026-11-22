#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

struct Item {
    double weight, profit;
    int id;
};

int main() {
    int n;
    double capacity;
    cout << "Enter number of items and knapsack capacity: ";
    if (!(cin >> n >> capacity) || n <= 0) return 0;
    vector<Item> items(n);
    cout << "Enter weight and profit of each item:\n";
    for (int i = 0; i < n; i++) {
        cin >> items[i].weight >> items[i].profit;
        if (items[i].weight <= 0) {
            cout << "Invalid weight\n";
            return 0;
        }
        items[i].id = i + 1;
    }

    sort(items.begin(), items.end(), [](const Item& a, const Item& b) {
        return (a.profit / a.weight) > (b.profit / b.weight);
    });

    double total = 0;
    for (const Item& x : items) {
        if (capacity <= 0) break;
        double taken = min(capacity, x.weight);
        total += taken * (x.profit / x.weight);
        capacity -= taken;
        cout << "Item " << x.id << ": " << taken << " weight taken\n";
    }
    cout << fixed << setprecision(2);
    cout << "Maximum profit: " << total << '\n';
    return 0;
}
