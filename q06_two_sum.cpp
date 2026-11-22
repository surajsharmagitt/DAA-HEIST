#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int n, target;
    cout << "Enter number of elements: ";
    if (!(cin >> n) || n <= 0) return 0;
    vector<int> a(n);
    cout << "Enter elements: ";
    for (int &x : a) cin >> x;
    cout << "Enter target sum T: ";
    cin >> target;

    unordered_set<int> seen;
    for (int x : a) {
        if (seen.count(target - x)) {
            cout << "Pair found: " << target - x << " + " << x << " = " << target << '\n';
            return 0;
        }
        seen.insert(x);
    }
    cout << "No pair found\n";
    return 0;
}
