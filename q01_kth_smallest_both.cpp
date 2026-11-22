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

int quickSelect(vector<int> a, int k) {
    int l = 0, r = (int)a.size() - 1;
    while (l <= r) {
        swap(a[r], a[l + rand() % (r - l + 1)]);
        int p = partitionArray(a, l, r);
        if (p == k - 1) return a[p];
        if (p < k - 1) l = p + 1;
        else r = p - 1;
    }
    return -1;
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
    vector<int> sortedA = a;
    for (int i = 0; i < n; i++) {
        int pos = i;
        for (int j = i + 1; j < n; j++)
            if (sortedA[j] < sortedA[pos]) pos = j;
        swap(sortedA[i], sortedA[pos]);
    }
    cout << "\n--- Method 1: Sorting Approach ---\n";
    cout << "Kth smallest: " << sortedA[k - 1] << '\n';
    cout << "\n--- Method 2: Quickselect Approach ---\n";
    cout << "Kth smallest: " << quickSelect(a, k) << '\n';
    return 0;
}
