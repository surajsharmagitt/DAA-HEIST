#include <bits/stdc++.h>
using namespace std;

struct Item { double weight, profit; int id; };

int main() {
    int n;
    double capacity;
    cin >> n >> capacity;
    vector<Item> items(n);
    for (int i = 0; i < n; i++) {
        cin >> items[i].weight >> items[i].profit;
        if (items[i].weight <= 0) return cout << "Invalid weight\n", 0;
        items[i].id = i + 1;
    }

    sort(items.begin(), items.end(), [](Item a, Item b) {
        return a.profit / a.weight > b.profit / b.weight;
    });

    double total = 0;
    for (Item x : items) {
        if (capacity <= 0) break;
        double taken = min(capacity, x.weight);
        total += taken * x.profit / x.weight;
        capacity -= taken;
        cout << "Item " << x.id << ": " << taken << " weight taken\n";
    }
    cout << fixed << setprecision(2) << "Maximum profit: " << total << '\n';
}
