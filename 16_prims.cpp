#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n, m;
    cout << "Enter number of vertices and edges: ";
    cin >> n >> m;
    const int INF = INT_MAX;
    vector<vector<int> > graph(n + 1, vector<int>(n + 1, INF));
    cout << "Enter each edge as: u v weight (vertices 1 to " << n << "):\n";
    for (int i = 0; i < m; i++) {
        int u, v, w; cin >> u >> v >> w;
        graph[u][v] = min(graph[u][v], w);
        graph[v][u] = min(graph[v][u], w);
    }
    vector<int> cost(n + 1, INF), parent(n + 1, 0);
    vector<bool> used(n + 1, false);
    cost[1] = 0;
    long long total = 0;
    for (int i = 1; i <= n; i++) {
        int u = -1;
        for (int j = 1; j <= n; j++)
            if (!used[j] && (u == -1 || cost[j] < cost[u])) u = j;
        if (u == -1 || cost[u] == INF) return cout << "No spanning tree\n", 0;
        used[u] = true;
        total += cost[u];
        if (parent[u]) cout << parent[u] << " - " << u << " : " << cost[u] << '\n';
        for (int v = 1; v <= n; v++)
            if (!used[v] && graph[u][v] < cost[v]) {
                cost[v] = graph[u][v];
                parent[v] = u;
            }
    }
    cout << "MST cost: " << total << '\n';
}
