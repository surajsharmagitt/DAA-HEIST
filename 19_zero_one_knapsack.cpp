#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, capacity;
    cin >> n >> capacity;
    vector<int> weight(n + 1), profit(n + 1);
    for (int i = 1; i <= n; i++) cin >> weight[i] >> profit[i];
    vector<vector<int> > dp(n + 1, vector<int>(capacity + 1, 0));
    for (int i = 1; i <= n; i++)
        for (int w = 0; w <= capacity; w++) {
            dp[i][w] = dp[i - 1][w];
            if (weight[i] <= w)
                dp[i][w] = max(dp[i][w], profit[i] + dp[i - 1][w - weight[i]]);
        }
    cout << "Maximum profit: " << dp[n][capacity] << '\n';
}
