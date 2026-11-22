#include <bits/stdc++.h>
using namespace std;

int main() {
    int size, n;
    cin >> size >> n;
    if (size <= 0) return 0;
    vector<int> table(size);
    vector<bool> used(size, false);
    for (int j = 0; j < n; j++) {
        int key; cin >> key;
        int hash = (key % size + size) % size;
        bool inserted = false;
        for (int i = 0; i < size; i++) {
            int pos = (hash + 1LL * i * i) % size;
            if (!used[pos]) {
                table[pos] = key;
                used[pos] = inserted = true;
                break;
            }
        }
        if (!inserted) cout << "No quadratic slot for " << key << '\n';
    }
    for (int i = 0; i < size; i++) {
        cout << i << ": ";
        if (used[i]) cout << table[i];
        else cout << "Empty";
        cout << '\n';
    }
}
