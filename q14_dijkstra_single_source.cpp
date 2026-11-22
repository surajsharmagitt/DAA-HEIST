#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, directed, source;
    cin >> n >> m >> directed;
    vector<vector<pair<int, int>>> graph(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        if (w < 0) return cout << "Negative weights not allowed\n", 0;
        graph[u].push_back({v, w});
        if (!directed) graph[v].push_back({u, w});
    }
    cin >> source;

    const long long INF = LLONG_MAX / 4;
    vector<long long> dist(n + 1, INF);
    priority_queue<pair<long long, int>, vector<pair<long long, int>>,
                   greater<pair<long long, int>>> pq;
    dist[source] = 0;
    pq.push({0, source});

    while (!pq.empty()) {
        auto [d, u] = pq.top(); pq.pop();
        if (d != dist[u]) continue;
        for (auto [v, w] : graph[u]) {
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << source << " -> " << i << ": ";
        if (dist[i] == INF) cout << "INF";
        else cout << dist[i];
        cout << '\n';
    }
}
