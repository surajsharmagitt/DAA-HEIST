#include <iostream>
#include <vector>

using namespace std;

void mergeSort(vector<int>& a, int l, int r) {
    if (l >= r) return;
    int mid = l + (r - l) / 2;
    mergeSort(a, l, mid);
    mergeSort(a, mid + 1, r);

    vector<int> temp;
    int i = l, j = mid + 1;
    while (i <= mid && j <= r) {
        if (a[i] <= a[j]) temp.push_back(a[i++]);
        else temp.push_back(a[j++]);
    }
    while (i <= mid) temp.push_back(a[i++]);
    while (j <= r) temp.push_back(a[j++]);
    for (int k = 0; k < (int)temp.size(); k++) a[l + k] = temp[k];
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    if (!(cin >> n) || n <= 0) return 0;
    vector<int> a(n);
    cout << "Enter array elements: ";
    for (int &x : a) cin >> x;
    mergeSort(a, 0, n - 1);
    cout << "Sorted array: ";
    for (int x : a) cout << x << ' ';
    cout << '\n';

    cout << "\n--- Time Complexity Analysis ---\n";
    cout << "Recurrence Relation: T(n) = 2T(n/2) + O(n)\n";
    cout << "Best Case:    O(n log n)\n";
    cout << "Average Case: O(n log n)\n";
    cout << "Worst Case:   O(n log n)\n";
    cout << "Space Complexity: O(n) auxiliary space\n";
    return 0;
}
