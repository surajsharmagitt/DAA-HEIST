#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

pair<int, int> findMinMax(vector<int>& a, int left, int right, int& comparisons) {
    if (left == right) return make_pair(a[left], a[left]);
    if (left + 1 == right) {
        comparisons++;
        return make_pair(min(a[left], a[right]), max(a[left], a[right]));
    }
    int mid = (left + right) / 2;
    pair<int, int> x = findMinMax(a, left, mid, comparisons);
    pair<int, int> y = findMinMax(a, mid + 1, right, comparisons);
    comparisons += 2;
    return make_pair(min(x.first, y.first), max(x.second, y.second));
}

int main() {
    int n; cin >> n;
    if (n <= 0) return 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int comparisons = 0;
    pair<int, int> ans = findMinMax(a, 0, n - 1, comparisons);
    cout << "Minimum: " << ans.first << " Maximum: " << ans.second << '\n';
    cout << "D&C comparisons: " << comparisons << '\n';
    cout << "Traditional comparisons: " << 2 * (n - 1) << '\n';
}
