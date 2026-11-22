#include <bits/stdc++.h>
using namespace std;

int n, solutions = 0;
vector<int> queen;

void solve(int row) {
    if (row == n) {
        cout << "Solution " << ++solutions << ":\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) cout << (queen[i] == j ? 'Q' : '.') << ' ';
            cout << '\n';
        }
        return;
    }
    for (int col = 0; col < n; col++) {
        bool safe = true;
        for (int i = 0; i < row; i++)
            if (queen[i] == col || abs(queen[i] - col) == row - i) safe = false;
        if (safe) {
            queen[row] = col;
            solve(row + 1);
        }
    }
}

int main() {
    cin >> n;
    if (n < 1 || n > 12) return cout << "Invalid n\n", 0;
    queen.resize(n);
    solve(0);
    cout << "Total solutions: " << solutions << '\n';
}
