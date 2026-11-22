#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> k;
    if (k < 1 || k > n) return cout << "Invalid k\n", 0;

    for (int i = 0; i < n; i++) {
        int pos = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[pos]) pos = j;
        swap(a[i], a[pos]);
    }
    cout << "Kth smallest: " << a[k - 1] << '\n';
}
