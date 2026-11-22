#include <iostream>
#include <vector>
#include <queue>
#include <tuple>

using namespace std;

int main() {
    int n, m;
    cout << "Enter vertices and edges: ";
    if (!(cin >> n >> m)) return 0;
    vector<vector<pair<int, int>>> graph(n + 1);
    cout << "Enter edges (u v weight):\n";
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }

    vector<bool> visited(n + 1, false);
    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> pq;
    pq.push({0, 1, 0});
    long long total = 0;
    int count = 0;

    cout << "\nEdges in Minimum Spanning Tree:\n";
    while (!pq.empty()) {
        auto item = pq.top();
        pq.pop();
        int cost = get<0>(item);
        int u = get<1>(item);
        int parent = get<2>(item);
        if (visited[u]) continue;
        visited[u] = true;
        total += cost;
        count++;
        if (parent) cout << parent << " - " << u << " : " << cost << '\n';
        for (const auto& edge : graph[u]) {
            int v = edge.first;
            int w = edge.second;
            if (!visited[v]) pq.push({w, v, u});
        }
    }
    if (count != n) cout << "No spanning tree\n";
    else cout << "MST cost: " << total << '\n';
    return 0;
}
