#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    if (!(cin >> n) || n <= 0) return 0;
    vector<int> a(n);
    cout << "Enter array elements: ";
    for (int &x : a) cin >> x;
    int minimum = a[0], maximum = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < minimum) minimum = a[i];
        if (a[i] > maximum) maximum = a[i];
    }
    cout << "\nTraditional Linear Scan:\n";
    cout << "Minimum element = " << minimum << '\n';
    cout << "Maximum element = " << maximum << '\n';
    return 0;
}
