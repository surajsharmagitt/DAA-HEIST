#include <bits/stdc++.h>
using namespace std;

pair<int, int> divideConquer(vector<int>& a, int l, int r, int& comparisons) {
    if (l == r) return {a[l], a[l]};
    if (r == l + 1) {
        comparisons++;
        return {min(a[l], a[r]), max(a[l], a[r])};
    }
    int mid = (l + r) / 2;
    auto left = divideConquer(a, l, mid, comparisons);
    auto right = divideConquer(a, mid + 1, r, comparisons);
    comparisons += 2;
    return {min(left.first, right.first), max(left.second, right.second)};
}

int main() {
    int n;
    cin >> n;
    if (n <= 0) return 0;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    int dcCount = 0, simpleCount = 0;
    auto answer = divideConquer(a, 0, n - 1, dcCount);
    int minimum = a[0], maximum = a[0];
    for (int i = 1; i < n; i++) {
        simpleCount++;
        if (a[i] < minimum) minimum = a[i];
        simpleCount++;
        if (a[i] > maximum) maximum = a[i];
    }
    cout << "D&C min/max: " << answer.first << ' ' << answer.second << '\n';
    cout << "D&C comparisons: " << dcCount << '\n';
    cout << "Traditional min/max: " << minimum << ' ' << maximum << '\n';
    cout << "Traditional comparisons: " << simpleCount << '\n';
}
