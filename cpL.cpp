#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    long long ans = 0;
    for(int i = 0; i < n; i++) {
        int c = s[i] - 'A' + 1;
        ans += c * pow(26, n - i - 1);
    }
    cout << ans << endl;
    return 0;
}
