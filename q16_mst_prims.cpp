#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, int>>> graph(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }

    vector<bool> visited(n + 1, false);
    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>,
                   greater<tuple<int, int, int>>> pq;
    pq.push({0, 1, 0});
    long long total = 0;
    int count = 0;

    while (!pq.empty()) {
        auto [cost, u, parent] = pq.top(); pq.pop();
        if (visited[u]) continue;
        visited[u] = true;
        total += cost;
        count++;
        if (parent) cout << parent << " - " << u << " : " << cost << '\n';
        for (auto [v, w] : graph[u])
            if (!visited[v]) pq.push({w, v, u});
    }
    if (count != n) cout << "No spanning tree\n";
    else cout << "MST cost: " << total << '\n';
}
