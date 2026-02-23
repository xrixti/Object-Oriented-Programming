#include <iostream>

using namespace std;

int main()
{
    int n, curr = 0, max_cap = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        curr += b - a;
        if (curr > max_cap) {
            max_cap = curr;
        }
    }

    cout << max_cap << endl;

    return 0;
}

