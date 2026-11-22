#include <iostream>
#include <stack>

using namespace std;

void hanoiRecursive(int n, char from, char help, char to) {
    if (n == 0) return;
    hanoiRecursive(n - 1, from, to, help);
    cout << "Move disk " << n << " from " << from << " to " << to << '\n';
    hanoiRecursive(n - 1, help, from, to);
}

void moveDisk(stack<int>& a, stack<int>& b, char x, char y) {
    if (a.empty() || (!b.empty() && b.top() < a.top())) {
        int disk = b.top();
        b.pop();
        a.push(disk);
        cout << "Move disk " << disk << " from " << y << " to " << x << '\n';
    } else {
        int disk = a.top();
        a.pop();
        b.push(disk);
        cout << "Move disk " << disk << " from " << x << " to " << y << '\n';
    }
}

void hanoiIterative(int n) {
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
        } else {
            moveDisk(b, c, 'B', 'C');
        }
    }
}

int main() {
    int n;
    cout << "Enter number of disks: ";
    if (!(cin >> n) || n < 1 || n > 20) {
        cout << "Enter n from 1 to 20\n";
        return 0;
    }
    cout << "\n--- Method a: Recursive ---\n";
    hanoiRecursive(n, 'A', 'B', 'C');
    cout << "\n--- Method b: Non-Recursive (Stack Based) ---\n";
    hanoiIterative(n);
    return 0;
}
