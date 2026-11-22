#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int partitionArray(vector<int>& a, int l, int r) {
    int pivot = a[r], i = l;
    for (int j = l; j < r; j++)
        if (a[j] <= pivot) swap(a[i++], a[j]);
    swap(a[i], a[r]);
    return i;
}

void quickSort(vector<int>& a, int l, int r) {
    if (l >= r) return;
    int p = partitionArray(a, l, r);
    quickSort(a, l, p - 1);
    quickSort(a, p + 1, r);
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    if (!(cin >> n) || n <= 0) return 0;
    vector<int> a(n);
    cout << "Enter array elements: ";
    for (int &x : a) cin >> x;
    quickSort(a, 0, n - 1);
    cout << "Sorted array: ";
    for (int x : a) cout << x << ' ';
    cout << '\n';

    cout << "\n--- Time Complexity Analysis ---\n";
    cout << "Recurrence (Balanced): T(n) = 2T(n/2) + O(n)\n";
    cout << "Best Case:    O(n log n)\n";
    cout << "Average Case: O(n log n)\n";
    cout << "Worst Case:   O(n^2)\n";
    cout << "Space Complexity: O(log n) stack space\n";
    return 0;
}
