#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

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
    cout << "Enter number of elements: ";
    if (!(cin >> n) || n <= 0) return 0;
    vector<int> a(n);
    cout << "Enter elements: ";
    for (int &x : a) cin >> x;
    cout << "Enter k: ";
    cin >> k;
    if (k < 1 || k > n) {
        cout << "Invalid k\n";
        return 0;
    }
    srand((unsigned int)time(nullptr));
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
    return 0;
}
