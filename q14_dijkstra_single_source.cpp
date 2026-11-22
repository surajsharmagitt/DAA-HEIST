#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

int main() {
    int n, m, directed, source;
    cout << "Enter vertices, edges, directed (1/0): ";
    if (!(cin >> n >> m >> directed)) return 0;
    vector<vector<pair<int, int>>> graph(n + 1);
    cout << "Enter edges (u v weight):\n";
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        if (w < 0) {
            cout << "Negative weights not allowed\n";
            return 0;
        }
        graph[u].push_back({v, w});
        if (!directed) graph[v].push_back({u, w});
    }
    cout << "Enter source vertex: ";
    cin >> source;

    const long long INF = LLONG_MAX / 4;
    vector<long long> dist(n + 1, INF);
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
    dist[source] = 0;
    pq.push({0, source});

    while (!pq.empty()) {
        auto top = pq.top();
        pq.pop();
        long long d = top.first;
        int u = top.second;
        if (d != dist[u]) continue;
        for (const auto& edge : graph[u]) {
            int v = edge.first;
            int w = edge.second;
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
    cout << "\nShortest distances from source " << source << ":\n";
    for (int i = 1; i <= n; i++) {
        cout << source << " -> " << i << ": ";
        if (dist[i] == INF) cout << "INF";
        else cout << dist[i];
        cout << '\n';
    }
    return 0;
}
