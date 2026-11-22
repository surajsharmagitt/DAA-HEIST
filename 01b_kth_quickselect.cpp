#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

int partitionArray(vector<int>& a, int left, int right) {
    int pivot = a[right], pos = left;
    for (int i = left; i < right; i++)
        if (a[i] <= pivot) swap(a[i], a[pos++]);
    swap(a[pos], a[right]);
    return pos;
}

int main() {
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter " << n << " array elements: ";
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << "Enter k (1 to " << n << "): ";
    cin >> k;
    if (k < 1 || k > n) return cout << "Invalid k\n", 0;

    srand(time(0));
    int left = 0, right = n - 1;
    while (left <= right) {
        swap(a[right], a[left + rand() % (right - left + 1)]);
        int pos = partitionArray(a, left, right);
        if (pos == k - 1) {
            cout << "Kth smallest: " << a[pos] << '\n';
            break;
        }
        if (pos < k - 1) left = pos + 1;
        else right = pos - 1;
    }
}
