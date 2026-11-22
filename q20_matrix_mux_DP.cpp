#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> p(n + 1);
    for (long long &x : p) cin >> x;

    const long long INF = LLONG_MAX / 4;
    vector<vector<long long>> dp(n + 1, vector<long long>(n + 1, 0));
    vector<vector<int>> split(n + 1, vector<int>(n + 1));

    for (int len = 2; len <= n; len++) {
        for (int i = 1; i + len - 1 <= n; i++) {
            int j = i + len - 1;
            dp[i][j] = INF;
            for (int k = i; k < j; k++) {
                long long cost = dp[i][k] + dp[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (cost < dp[i][j]) {
                    dp[i][j] = cost;
                    split[i][j] = k;
                }
            }
        }
    }

    function<void(int, int)> printOrder = [&](int i, int j) {
        if (i == j) { cout << 'A' << i; return; }
        cout << '(';
        printOrder(i, split[i][j]);
        printOrder(split[i][j] + 1, j);
        cout << ')';
    };
    if (n < 1) return 0;
    cout << "Minimum multiplications: " << dp[1][n] << '\n';
    printOrder(1, n);
    cout << '\n';
}
