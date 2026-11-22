#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    if (!(cin >> n) || n <= 0) return 0;
    vector<int> order;
    unordered_map<int, int> freq;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (freq[x] == 0) order.push_back(x);
        freq[x]++;
    }
    cout << "\nElement Frequency\n";
    for (int x : order) {
        cout << x << "       " << freq[x] << '\n';
    }
    return 0;
}
