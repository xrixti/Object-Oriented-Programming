#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, min1, max1, min2, max2, min3, max3;
    cin >> n >> min1 >> max1 >> min2 >> max2 >> min3 >> max3;

    int max_first = min(n - min2 - min3, max1);
    int max_second = min(n - max_first - min3, max2);
    int max_third = n - max_first - max_second;

    int first = max_first;
    int second = min(max_second, n - first - min3);
    int third = n - first - second;

    // print the result
    cout << first << " " << second << " " << third << endl;

    return 0;
}
