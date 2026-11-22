#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<int, int> freq;
    vector<int> order;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (freq[x] == 0) order.push_back(x);
        freq[x]++;
    }
    for (int x : order) cout << x << " : " << freq[x] << '\n';
}
