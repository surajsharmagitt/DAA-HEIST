#include <bits/stdc++.h>
using namespace std;

struct Edge { int u, v, w; };

int main() {
    int n, m;
    cin >> n >> m;
    vector<Edge> edges(m);
    for (auto &e : edges) cin >> e.u >> e.v >> e.w;
    sort(edges.begin(), edges.end(), [](Edge a, Edge b) {
        return a.w < b.w;
    });

    vector<int> parent(n + 1), size(n + 1, 1);
    iota(parent.begin(), parent.end(), 0);
    function<int(int)> root = [&](int x) {
        if (parent[x] == x) return x;
        return parent[x] = root(parent[x]);
    };

    long long total = 0;
    int taken = 0;
    for (Edge e : edges) {
        int a = root(e.u), b = root(e.v);
        if (a == b) continue;
        if (size[a] < size[b]) swap(a, b);
        parent[b] = a;
        size[a] += size[b];
        cout << e.u << " - " << e.v << " : " << e.w << '\n';
        total += e.w;
        taken++;
        if (taken == n - 1) break;
    }
    if (taken != n - 1) cout << "No spanning tree\n";
    else cout << "MST cost: " << total << '\n';
}
