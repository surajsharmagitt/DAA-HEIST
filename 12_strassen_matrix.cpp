#include <iostream>
using namespace std;

int main() {
    long long a, b, c, d, e, f, g, h;
    cout << "Enter matrix A (2x2), row-wise (4 numbers): ";
    cin >> a >> b >> c >> d;
    cout << "Enter matrix B (2x2), row-wise (4 numbers): ";
    cin >> e >> f >> g >> h;

    long long p1 = (a + d) * (e + h);
    long long p2 = (c + d) * e;
    long long p3 = a * (f - h);
    long long p4 = d * (g - e);
    long long p5 = (a + b) * h;
    long long p6 = (c - a) * (e + f);
    long long p7 = (b - d) * (g + h);

    cout << "Strassen:\n";
    cout << p1 + p4 - p5 + p7 << ' ' << p3 + p5 << '\n';
    cout << p2 + p4 << ' ' << p1 - p2 + p3 + p6 << '\n';
    cout << "Normal:\n";
    cout << a*e + b*g << ' ' << a*f + b*h << '\n';
    cout << c*e + d*g << ' ' << c*f + d*h << '\n';
}
