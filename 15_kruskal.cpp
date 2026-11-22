#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

struct Edge { int u, v, weight; };

bool byWeight(Edge a, Edge b) { return a.weight < b.weight; }

int findRoot(int x, vector<int>& parent) {
    if (parent[x] == x) return x;
    return parent[x] = findRoot(parent[x], parent);
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<Edge> edges(m);
    for (int i = 0; i < m; i++) cin >> edges[i].u >> edges[i].v >> edges[i].weight;
    sort(edges.begin(), edges.end(), byWeight);
    vector<int> parent(n + 1);
    for (int i = 0; i <= n; i++) parent[i] = i;
    long long total = 0;
    int count = 0;
    for (int i = 0; i < m; i++) {
        Edge e = edges[i];
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
