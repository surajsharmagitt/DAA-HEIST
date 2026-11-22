#include <bits/stdc++.h>
using namespace std;

int partitionArray(vector<int>& a, int l, int r) {
    int pivot = a[r], i = l;
    for (int j = l; j < r; j++)
        if (a[j] <= pivot) swap(a[i++], a[j]);
    swap(a[i], a[r]);
    return i;
}

int main() {
    int n, k;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    cin >> k;
    if (k < 1 || k > n) return cout << "Invalid k\n", 0;

    srand(time(nullptr));
    int l = 0, r = n - 1;
    while (l <= r) {
        swap(a[r], a[l + rand() % (r - l + 1)]);
        int p = partitionArray(a, l, r);
        if (p == k - 1) {
            cout << "Kth smallest: " << a[p] << '\n';
            break;
        }
        if (p < k - 1) l = p + 1;
        else r = p - 1;
    }
}
