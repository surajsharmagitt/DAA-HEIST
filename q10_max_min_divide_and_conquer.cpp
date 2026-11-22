#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

pair<int, int> divideConquer(const vector<int>& a, int l, int r) {
    if (l == r) return {a[l], a[l]};
    if (r == l + 1) {
        return {min(a[l], a[r]), max(a[l], a[r])};
    }
    int mid = l + (r - l) / 2;
    auto left = divideConquer(a, l, mid);
    auto right = divideConquer(a, mid + 1, r);
    return {min(left.first, right.first), max(left.second, right.second)};
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    if (!(cin >> n) || n <= 0) return 0;
    vector<int> a(n);
    cout << "Enter array elements: ";
    for (int &x : a) cin >> x;
    auto ans = divideConquer(a, 0, n - 1);
    cout << "\nDivide & Conquer Strategy:\n";
    cout << "Minimum element = " << ans.first << '\n';
    cout << "Maximum element = " << ans.second << '\n';
    return 0;
}
