#include <iostream>
using namespace std;

int main() {
    long long x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;

    long long sum = (x1 + x2 + x3 + x4) / 2;
    long long a = sum - x4;
    long long b = sum - x3;
    long long c = sum - a - b;

    cout << a << " " << b << " " << c << endl;
    return 0;
}
