#include <iostream>
#include <vector>
using namespace std;

int hashKey(long long x, int m) { return (int)((x % m + m) % m); }

int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter " << n << " array elements: ";
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << "Enter target sum: ";
    cin >> target;
    int m = 2 * n + 1;
    vector<vector<int> > table(m);
    for (int i = 0; i < n; i++) {
        long long need = (long long)target - a[i];
        vector<int> &bucket = table[hashKey(need, m)];
        for (int j = 0; j < (int)bucket.size(); j++) {
            if (bucket[j] == need) {
                cout << need << " + " << a[i] << " = " << target << '\n';
                return 0;
            }
        }
        table[hashKey(a[i], m)].push_back(a[i]);
    }
    cout << "No pair found\n";
}
