#include <iostream>
using namespace std;

int main()
{
    long long a, b, c, d, sum;
    cin >> a >> b >> c >> d;

    sum = a + b + c;


    a = (d - b - c + sum) / 2;
    b = (d - a - c + sum) / 2;
    c = (d - a - b + sum) / 2;

    cout << a << " " << b << " " << c << endl;

    return 0;
}
