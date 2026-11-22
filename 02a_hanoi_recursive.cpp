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
    cin >> n;
    if (n < 1 || n > 20) return cout << "Invalid n\n", 0;
    hanoi(n, 'A', 'B', 'C');
}
