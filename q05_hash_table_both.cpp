#include <iostream>
#include <vector>

using namespace std;

void linearProbing(int m, const vector<int>& keys) {
    vector<int> table(m);
    vector<bool> used(m, false);
    for (int x : keys) {
        int h = (x % m + m) % m;
        bool placed = false;
        for (int i = 0; i < m; i++) {
            int pos = (h + i) % m;
            if (!used[pos]) {
                table[pos] = x;
                used[pos] = placed = true;
                break;
            }
        }
        if (!placed) cout << "Table full for " << x << '\n';
    }
    cout << "\n--- Method a: Linear Probing ---\n";
    for (int i = 0; i < m; i++) {
        cout << "Index " << i << ": ";
        if (used[i]) cout << table[i];
        else cout << "Empty";
        cout << '\n';
    }
}

void quadraticProbing(int m, const vector<int>& keys) {
    vector<int> table(m);
    vector<bool> used(m, false);
    for (int x : keys) {
        int h = (x % m + m) % m;
        bool placed = false;
        for (int i = 0; i < m; i++) {
            int pos = (h + i * i) % m;
            if (!used[pos]) {
                table[pos] = x;
                used[pos] = placed = true;
                break;
            }
        }
        if (!placed) cout << "No quadratic slot for " << x << '\n';
    }
    cout << "\n--- Method b: Quadratic Probing ---\n";
    for (int i = 0; i < m; i++) {
        cout << "Index " << i << ": ";
        if (used[i]) cout << table[i];
        else cout << "Empty";
        cout << '\n';
    }
}

int main() {
    int m, n;
    cout << "Enter table size and number of keys: ";
    if (!(cin >> m >> n) || m <= 0) return 0;
    vector<int> keys(n);
    cout << "Enter keys: ";
    for (int &x : keys) cin >> x;
    linearProbing(m, keys);
    quadraticProbing(m, keys);
    return 0;
}
