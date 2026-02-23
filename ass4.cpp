#include <iostream>
using namespace std;

int isValid(string str) {
    int cnt = 0, lowercase = 0, uppercase = 0, digit = 0, special = 0;
    for (int i = 0; str[i]; i++) {
        cnt++;
        if (str[i] >= 'A' && str[i] <= 'Z') uppercase++;
        else if (str[i] >= 'a' && str[i] <= 'z') lowercase++;
        else if (str[i] >= '0' && str[i] <= '9') digit++;
        else special++;
    }
    if (cnt < 8 && lowercase < 1 ) throw 1;
    if (lowercase < 1) throw 2;
    if (uppercase < 1) throw 3;
    if (digit < 1) throw 4;
    if (special < 1) throw 5;
   if (cnt < 8 ) throw 6;
    cout << "Successfully logged in!" << endl;
    return 0;
}

int main() {

    string pass, username;
    cout << "Enter username: " << endl;
    cin >> username;

    while(1) {
        cout << "Enter password: " << endl;
        cin >> pass;
        int x = -1;
        try {
            x = isValid(pass);
        }

        catch(int t) {
            if (t == 1) cout << "Password must be at least 8 characters, at least one lowercase letter ." << endl;
            if (t == 2) cout << "Password must contain at least one lowercase letter." << endl;
            if (t == 3) cout << "Password must contain at least one uppercase letter." << endl;
            if (t == 4) cout << "Password must contain at least one digit." << endl;
            if (t == 5) cout << "Password must contain at least one special symbol." << endl;
             if (t == 6) cout << "Password must be at least 8 characters ." << endl;
        }

        if (x == 0) break;
    }

    return 0;
}
