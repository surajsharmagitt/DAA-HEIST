#include <iostream>

using namespace std;

int main() {
    long long a, b, c, d, e, f, g, h;
    cout << "Enter elements of Matrix A (2x2): ";
    if (!(cin >> a >> b >> c >> d)) return 0;
    cout << "Enter elements of Matrix B (2x2): ";
    if (!(cin >> e >> f >> g >> h)) return 0;

    long long c11 = a * e + b * g;
    long long c12 = a * f + b * h;
    long long c21 = c * e + d * g;
    long long c22 = c * f + d * h;

    cout << "\nResultant Matrix (Normal Multiplication - 8 Multiplications):\n";
    cout << c11 << ' ' << c12 << '\n';
    cout << c21 << ' ' << c22 << '\n';
    return 0;
}
