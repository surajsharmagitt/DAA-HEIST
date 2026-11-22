#include <iostream>

using namespace std;

int main() {
    long long a, b, c, d, e, f, g, h;
    cout << "Enter elements of Matrix A (2x2): ";
    if (!(cin >> a >> b >> c >> d)) return 0;
    cout << "Enter elements of Matrix B (2x2): ";
    if (!(cin >> e >> f >> g >> h)) return 0;

    long long p1 = (a + d) * (e + h);
    long long p2 = (c + d) * e;
    long long p3 = a * (f - h);
    long long p4 = d * (g - e);
    long long p5 = (a + b) * h;
    long long p6 = (c - a) * (e + f);
    long long p7 = (b - d) * (g + h);

    long long c11 = p1 + p4 - p5 + p7;
    long long c12 = p3 + p5;
    long long c21 = p2 + p4;
    long long c22 = p1 - p2 + p3 + p6;

    cout << "\nResultant Matrix (Strassen's Algorithm - 7 Multiplications):\n";
    cout << c11 << ' ' << c12 << '\n';
    cout << c21 << ' ' << c22 << '\n';
    return 0;
}
