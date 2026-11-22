#include <iostream>
#include <vector>

using namespace std;

int main() {
    int m, n;
    cout << "Enter table size and number of keys: ";
    if (!(cin >> m >> n) || m <= 0) return 0;
    vector<int> table(m);
    vector<bool> used(m, false);
    cout << "Enter keys: ";
    for (int j = 0; j < n; j++) {
        int x;
        cin >> x;
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
    cout << "\nHash Table (Linear Probing):\n";
    for (int i = 0; i < m; i++) {
        cout << "Index " << i << ": ";
        if (used[i]) cout << table[i];
        else cout << "Empty";
        cout << '\n';
    }
    return 0;
}
