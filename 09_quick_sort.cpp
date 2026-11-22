#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int partitionArray(vector<int>& a, int left, int right) {
    int pivot = a[right], pos = left;
    for (int i = left; i < right; i++)
        if (a[i] <= pivot) swap(a[i], a[pos++]);
    swap(a[pos], a[right]);
    return pos;
}

void quickSort(vector<int>& a, int left, int right) {
    if (left >= right) return;
    int pos = partitionArray(a, left, right);
    quickSort(a, left, pos - 1);
    quickSort(a, pos + 1, right);
}

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    if (n) quickSort(a, 0, n - 1);
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
    cout << '\n';
}
