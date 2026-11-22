#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "Enter number of vertices: ";
    if (!(cin >> n) || n <= 0) return 0;
    const long long INF = LLONG_MAX / 4;
    vector<vector<long long>> dist(n, vector<long long>(n));
    cout << "Enter cost matrix (-1 or 999 for no edge):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            long long w;
            cin >> w;
            if (i == j) dist[i][j] = 0;
            else dist[i][j] = (w == -1 || w == 999 ? INF : w);
        }
    }

    for (int k = 0; k < n; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (dist[i][k] != INF && dist[k][j] != INF)
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

    for (int i = 0; i < n; i++)
        if (dist[i][i] < 0) {
            cout << "Negative cycle\n";
            return 0;
        }

    cout << "\nShortest distance matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dist[i][j] == INF) cout << "INF\t";
            else cout << dist[i][j] << '\t';
        }
        cout << '\n';
    }
    return 0;
}
