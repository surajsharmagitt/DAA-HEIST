#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, target;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    cin >> target;

    unordered_set<int> seen;
    for (int x : a) {
        if (seen.count(target - x)) {
            cout << target - x << " + " << x << " = " << target << '\n';
            return 0;
        }
        seen.insert(x);
    }
    cout << "No pair found\n";
}
