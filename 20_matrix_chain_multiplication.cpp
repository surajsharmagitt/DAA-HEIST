#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    if (n < 1) return 0;
    vector<long long> p(n + 1);
    for (long long &x : p) cin >> x;
    const long long INF = LLONG_MAX / 4;
    vector<vector<long long>> dp(n + 1, vector<long long>(n + 1, 0));
    for (int len = 2; len <= n; len++)
        for (int i = 1; i + len - 1 <= n; i++) {
            int j = i + len - 1;
            dp[i][j] = INF;
            for (int k = i; k < j; k++)
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + p[i - 1] * p[k] * p[j]);
        }
    cout << "Minimum multiplications: " << dp[1][n] << '\n';
}
