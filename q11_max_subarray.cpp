#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

struct Result {
    long long sum;
    int left, right;
};

Result maxSubarray(const vector<int>& a, int l, int r) {
    if (l == r) return {a[l], l, r};
    int mid = l + (r - l) / 2;
    Result left = maxSubarray(a, l, mid);
    Result right = maxSubarray(a, mid + 1, r);

    long long sum = 0, bestLeft = LLONG_MIN, bestRight = LLONG_MIN;
    int leftIndex = mid, rightIndex = mid + 1;
    for (int i = mid; i >= l; i--) {
        sum += a[i];
        if (sum > bestLeft) {
            bestLeft = sum;
            leftIndex = i;
        }
    }
    sum = 0;
    for (int i = mid + 1; i <= r; i++) {
        sum += a[i];
        if (sum > bestRight) {
            bestRight = sum;
            rightIndex = i;
        }
    }
    Result cross = {bestLeft + bestRight, leftIndex, rightIndex};
    return max({left, right, cross}, [](const Result& x, const Result& y) {
        return x.sum < y.sum;
    });
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    if (!(cin >> n) || n <= 0) return 0;
    vector<int> a(n);
    cout << "Enter array elements: ";
    for (int &x : a) cin >> x;
    Result ans = maxSubarray(a, 0, n - 1);
    cout << "Maximum sum: " << ans.sum << '\n';
    cout << "Subarray: ";
    for (int i = ans.left; i <= ans.right; i++) cout << a[i] << ' ';
    cout << '\n';
    return 0;
}
