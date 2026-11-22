#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

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
    for (int i = 0; i < n; i++) {
        int pos = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[pos]) pos = j;
        swap(a[i], a[pos]);
    }
    cout << "Kth smallest: " << a[k - 1] << '\n';
    return 0;
}
