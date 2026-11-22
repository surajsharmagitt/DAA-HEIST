#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<int, int> count;
    vector<int> order;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (!count.count(x)) order.push_back(x);
        count[x]++;
    }
    for (int x : order) cout << x << ": " << count[x] << '\n';
}
