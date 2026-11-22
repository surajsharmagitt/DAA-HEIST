#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

struct Edge {
    int u, v, w;
};

int findRoot(int x, vector<int>& parent) {
    if (parent[x] == x) return x;
    return parent[x] = findRoot(parent[x], parent);
}

int main() {
    int n, m;
    cout << "Enter vertices and edges: ";
    if (!(cin >> n >> m)) return 0;
    vector<Edge> edges(m);
    cout << "Enter edges (u v weight):\n";
    for (auto &e : edges) cin >> e.u >> e.v >> e.w;

    sort(edges.begin(), edges.end(), [](const Edge& a, const Edge& b) {
        return a.w < b.w;
    });

    vector<int> parent(n + 1), sz(n + 1, 1);
    iota(parent.begin(), parent.end(), 0);

    long long total = 0;
    int taken = 0;
    cout << "\nEdges in Minimum Spanning Tree:\n";
    for (const Edge& e : edges) {
        int a = findRoot(e.u, parent);
        int b = findRoot(e.v, parent);
        if (a == b) continue;
        if (sz[a] < sz[b]) swap(a, b);
        parent[b] = a;
        sz[a] += sz[b];
        cout << e.u << " - " << e.v << " : " << e.w << '\n';
        total += e.w;
        taken++;
        if (taken == n - 1) break;
    }
    if (taken != n - 1) cout << "No spanning tree\n";
    else cout << "MST cost: " << total << '\n';
    return 0;
}
