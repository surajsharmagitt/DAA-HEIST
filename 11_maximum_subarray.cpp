#include <iostream>
#include <vector>
#include <climits>
using namespace std;

struct Answer { long long sum; int left, right; };

Answer maxSubarray(vector<int>& a, int left, int right) {
    if (left == right) { Answer ans = {a[left], left, right}; return ans; }
    int mid = (left + right) / 2;
    Answer x = maxSubarray(a, left, mid);
    Answer y = maxSubarray(a, mid + 1, right);

    long long sum = 0, bestLeft = LLONG_MIN, bestRight = LLONG_MIN;
    int start = mid, end = mid + 1;
    for (int i = mid; i >= left; i--) {
        sum += a[i];
        if (sum > bestLeft) { bestLeft = sum; start = i; }
    }
    sum = 0;
    for (int i = mid + 1; i <= right; i++) {
        sum += a[i];
        if (sum > bestRight) { bestRight = sum; end = i; }
    }
    Answer cross = {bestLeft + bestRight, start, end};
    if (x.sum >= y.sum && x.sum >= cross.sum) return x;
    if (y.sum >= cross.sum) return y;
    return cross;
}

int main() {
    int n; cin >> n;
    if (n <= 0) return 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    Answer ans = maxSubarray(a, 0, n - 1);
    cout << "Maximum sum: " << ans.sum << '\n';
    for (int i = ans.left; i <= ans.right; i++) cout << a[i] << ' ';
    cout << '\n';
}
