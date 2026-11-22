#include <iostream>
#include <vector>
using namespace std;

void mergeSort(vector<int>& a, int left, int right) {
    if (left >= right) return;
    int mid = (left + right) / 2;
    mergeSort(a, left, mid);
    mergeSort(a, mid + 1, right);

    vector<int> temp;
    int i = left, j = mid + 1;
    while (i <= mid && j <= right) {
        if (a[i] <= a[j]) temp.push_back(a[i++]);
        else temp.push_back(a[j++]);
    }
    while (i <= mid) temp.push_back(a[i++]);
    while (j <= right) temp.push_back(a[j++]);
    for (int k = 0; k < (int)temp.size(); k++) a[left + k] = temp[k];
}

int main() {
    cout << "Enter number of elements: ";
    int n; cin >> n;
    vector<int> a(n);
    cout << "Enter " << n << " array elements: ";
    for (int i = 0; i < n; i++) cin >> a[i];
    if (n) mergeSort(a, 0, n - 1);
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
    cout << '\n';
}
