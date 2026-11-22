#include <iostream>

using namespace std;

void hanoi(int n, char from, char help, char to) {
    if (n == 0) return;
    hanoi(n - 1, from, to, help);
    cout << "Move disk " << n << " from " << from << " to " << to << '\n';
    hanoi(n - 1, help, from, to);
}

int main() {
    int n;
    cout << "Enter number of disks: ";
    if (!(cin >> n) || n < 1 || n > 20) {
        cout << "Enter n from 1 to 20\n";
        return 0;
    }
    cout << "\n--- Recursive Method ---\n";
    hanoi(n, 'A', 'B', 'C');
    return 0;
}
