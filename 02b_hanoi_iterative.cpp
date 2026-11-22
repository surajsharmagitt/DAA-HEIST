#include <iostream>
#include <stack>
using namespace std;

void moveDisk(stack<int>& a, stack<int>& b, char x, char y) {
    if (a.empty() || (!b.empty() && b.top() < a.top())) {
        int disk = b.top(); b.pop(); a.push(disk);
        cout << "Move disk " << disk << " from " << y << " to " << x << '\n';
    } else {
        int disk = a.top(); a.pop(); b.push(disk);
        cout << "Move disk " << disk << " from " << x << " to " << y << '\n';
    }
}

int main() {
    int n;
    cin >> n;
    if (n < 1 || n > 20) return cout << "Invalid n\n", 0;
    stack<int> a, b, c;
    for (int i = n; i >= 1; i--) a.push(i);
    int moves = (1 << n) - 1;
    for (int i = 1; i <= moves; i++) {
        if (i % 3 == 1) {
            if (n % 2) moveDisk(a, c, 'A', 'C');
            else moveDisk(a, b, 'A', 'B');
        } else if (i % 3 == 2) {
            if (n % 2) moveDisk(a, b, 'A', 'B');
            else moveDisk(a, c, 'A', 'C');
        } else moveDisk(b, c, 'B', 'C');
    }
}
