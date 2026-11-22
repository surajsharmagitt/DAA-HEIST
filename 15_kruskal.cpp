#include <bits/stdc++.h>
using namespace std;

struct Edge { int u, v, weight; };

int findRoot(int x, vector<int>& parent) {
    if (parent[x] == x) return x;
    return parent[x] = findRoot(parent[x], parent);
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<Edge> edges(m);
    for (Edge &e : edges) cin >> e.u >> e.v >> e.weight;
    sort(edges.begin(), edges.end(), [](Edge a, Edge b) {
        return a.weight < b.weight;
    });
    vector<int> parent(n + 1);
    iota(parent.begin(), parent.end(), 0);
    long long total = 0;
    int count = 0;
    for (Edge e : edges) {
        int u = findRoot(e.u, parent), v = findRoot(e.v, parent);
        if (u == v) continue;
        parent[u] = v;
        cout << e.u << " - " << e.v << " : " << e.weight << '\n';
        total += e.weight;
        if (++count == n - 1) break;
    }
    if (count == n - 1) cout << "MST cost: " << total << '\n';
    else cout << "No spanning tree\n";
}
