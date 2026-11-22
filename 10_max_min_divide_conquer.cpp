#include <bits/stdc++.h>
using namespace std;

pair<int, int> findMinMax(vector<int>& a, int left, int right, int& comparisons) {
    if (left == right) return {a[left], a[left]};
    if (left + 1 == right) {
        comparisons++;
        return {min(a[left], a[right]), max(a[left], a[right])};
    }
    int mid = (left + right) / 2;
    auto x = findMinMax(a, left, mid, comparisons);
    auto y = findMinMax(a, mid + 1, right, comparisons);
    comparisons += 2;
    return {min(x.first, y.first), max(x.second, y.second)};
}

int main() {
    int n; cin >> n;
    if (n <= 0) return 0;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    int comparisons = 0;
    auto ans = findMinMax(a, 0, n - 1, comparisons);
    cout << "Minimum: " << ans.first << " Maximum: " << ans.second << '\n';
    cout << "D&C comparisons: " << comparisons << '\n';
    cout << "Traditional comparisons: " << 2 * (n - 1) << '\n';
}
