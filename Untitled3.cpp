#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(int num) {
    string num_str = to_string(num);
    int n = num_str.size();
    for (int i = 0; i < n/2; i++) {
        if (num_str[i] != num_str[n-i-1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++) {
        int n;
        cin >> n;
        cout << "Case " << i << ": ";
        if (is_palindrome(n)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
