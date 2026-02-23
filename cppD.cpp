#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i=1; i<=t; i++) {
        int a, b;
        cin >> a >> b;
        if(a > b) {
            swap(a, b);
        }
        int s = max(2 * a, b);
        cout << s * s << "\n";
    }
    return 0;
}
