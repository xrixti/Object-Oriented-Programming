#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;

    int n = S.size();
    long long sum = 0;
    long long power = 1;  // current power of 26

    // compute the index using a loop instead of pow()
    for (int i = n - 1; i >= 0; i--) {
        sum += power * (S[i] - 'A' + 1);
        power *= 26;
    }

    cout << sum << endl;

    return 0;
}
