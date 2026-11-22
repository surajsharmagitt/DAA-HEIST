#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n; cin >> n;
    const long long INF = LLONG_MAX / 4;
    vector<vector<long long> > d(n, vector<long long>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            long long x; cin >> x;
            d[i][j] = (i != j && x == -1) ? INF : x;
        }

    for (int k = 0; k < n; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (d[i][k] != INF && d[k][j] != INF)
                    d[i][j] = min(d[i][j], d[i][k] + d[k][j]);

    for (int i = 0; i < n; i++)
        if (d[i][i] < 0) return cout << "Negative cycle\n", 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (d[i][j] == INF) cout << "INF ";
            else cout << d[i][j] << ' ';
        }
        cout << '\n';
    }
}
