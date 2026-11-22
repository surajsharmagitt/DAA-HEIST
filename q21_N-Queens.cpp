#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n < 1 || n > 12) return cout << "Enter n from 1 to 12\n", 0;
    vector<int> queen(n);
    vector<bool> column(n, false), diag1(2 * n, false), diag2(2 * n, false);
    int solutions = 0;

    function<void(int)> solve = [&](int row) {
        if (row == n) {
            cout << "Solution " << ++solutions << ":\n";
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++)
                    cout << (queen[i] == j ? 'Q' : '.') << ' ';
                cout << '\n';
            }
            return;
        }
        for (int col = 0; col < n; col++) {
            int d1 = row - col + n, d2 = row + col;
            if (column[col] || diag1[d1] || diag2[d2]) continue;
            queen[row] = col;
            column[col] = diag1[d1] = diag2[d2] = true;
            solve(row + 1);
            column[col] = diag1[d1] = diag2[d2] = false;
        }
    };
    solve(0);
    cout << "Total solutions: " << solutions << '\n';
}
