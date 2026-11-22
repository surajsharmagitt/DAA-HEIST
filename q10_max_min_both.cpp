#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

pair<int, int> divideConquer(const vector<int>& a, int l, int r, int& comparisons) {
    if (l == r) return {a[l], a[l]};
    if (r == l + 1) {
        comparisons++;
        return {min(a[l], a[r]), max(a[l], a[r])};
    }
    int mid = l + (r - l) / 2;
    auto left = divideConquer(a, l, mid, comparisons);
    auto right = divideConquer(a, mid + 1, r, comparisons);
    comparisons += 2;
    return {min(left.first, right.first), max(left.second, right.second)};
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    if (!(cin >> n) || n <= 0) return 0;
    vector<int> a(n);
    cout << "Enter array elements: ";
    for (int &x : a) cin >> x;

    int dcCount = 0, simpleCount = 0;
    auto dcAns = divideConquer(a, 0, n - 1, dcCount);

    int minimum = a[0], maximum = a[0];
    for (int i = 1; i < n; i++) {
        simpleCount++;
        if (a[i] < minimum) minimum = a[i];
        simpleCount++;
        if (a[i] > maximum) maximum = a[i];
    }

    cout << "\n--- Strategy 1: Divide and Conquer ---\n";
    cout << "Minimum element: " << dcAns.first << '\n';
    cout << "Maximum element: " << dcAns.second << '\n';
    cout << "Comparisons made: " << dcCount << " (approx 3n/2 - 2)\n";

    cout << "\n--- Strategy 2: Traditional Linear Scan ---\n";
    cout << "Minimum element: " << minimum << '\n';
    cout << "Maximum element: " << maximum << '\n';
    cout << "Comparisons made: " << simpleCount << " (approx 2(n - 1))\n";

    cout << "\nAdvantage: Divide & Conquer reduces comparisons from " << simpleCount << " to " << dcCount << ".\n";
    return 0;
}
