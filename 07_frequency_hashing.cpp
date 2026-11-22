#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int hashKey(int x, int m) { return (int)(((long long)x % m + m) % m); }

int main() {
    int n;
    cin >> n;
    int m = 2 * n + 1;
    vector<vector<pair<int, int> > > table(m);
    vector<int> order;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        vector<pair<int, int> > &bucket = table[hashKey(x, m)];
        bool found = false;
        for (int j = 0; j < (int)bucket.size(); j++) {
            if (bucket[j].first == x) { bucket[j].second++; found = true; break; }
        }
        if (!found) { bucket.push_back(make_pair(x, 1)); order.push_back(x); }
    }
    for (int i = 0; i < (int)order.size(); i++) {
        int x = order[i];
        vector<pair<int, int> > &bucket = table[hashKey(x, m)];
        for (int j = 0; j < (int)bucket.size(); j++)
            if (bucket[j].first == x) cout << x << ": " << bucket[j].second << '\n';
    }
}
