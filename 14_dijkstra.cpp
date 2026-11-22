#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n, m, directed, source;
    cout << "Enter vertices, edges, directed (1=yes, 0=no): ";
    cin >> n >> m >> directed;
    const long long INF = LLONG_MAX / 4;
    vector<vector<long long> > graph(n + 1, vector<long long>(n + 1, INF));
    for (int i = 1; i <= n; i++) graph[i][i] = 0;
    cout << "Enter each edge as: from to weight (vertices 1 to " << n << "):\n";
    for (int i = 0; i < m; i++) {
        int u, v; long long w;
        cin >> u >> v >> w;
        if (w < 0) return cout << "Negative weight\n", 0;
        graph[u][v] = min(graph[u][v], w);
        if (!directed) graph[v][u] = min(graph[v][u], w);
    }
    cout << "Enter source vertex (1 to " << n << "): ";
    cin >> source;
    vector<long long> dist(n + 1, INF);
    vector<bool> used(n + 1, false);
    dist[source] = 0;
    for (int i = 1; i <= n; i++) {
        int u = -1;
        for (int j = 1; j <= n; j++)
            if (!used[j] && (u == -1 || dist[j] < dist[u])) u = j;
        if (u == -1 || dist[u] == INF) break;
        used[u] = true;
        for (int v = 1; v <= n; v++)
            if (graph[u][v] != INF)
                dist[v] = min(dist[v], dist[u] + graph[u][v]);
    }
    for (int i = 1; i <= n; i++) {
        cout << i << ": ";
        if (dist[i] == INF) cout << "INF\n";
        else cout << dist[i] << '\n';
    }
}
