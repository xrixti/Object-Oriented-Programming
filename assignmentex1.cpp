#include <iostream>
#include <string>

using namespace std;

void isValidPassword(string password) {
    int len = 0;
    int lowercaseCount = 0;
    int uppercaseCount = 0;
    int digitCount = 0;
    int specialCharCount = 0;

    for (int i = 0; password[i]; i++) {
        len++;

        if (password[i] >= 'a' && password[i] <= 'z')
            lowercaseCount++;
        else if (password[i] >= 'A' && password[i] <= 'Z')
            uppercaseCount++;
        else if (password[i] >= '0' && password[i] <= '9')
            digitCount++;
        else if (password[i] == '!' || password[i] == '@' || password[i] == '#' || password[i] == '$' || password[i] == '%' || password[i] == '^' || password[i] == '&' || password[i] == '*')
            specialCharCount++;
    }

    if (len < 8)
        throw 1;

    if (lowercaseCount < 1)
        throw 2;

    if (uppercaseCount < 1)
        throw 3;

    if (digitCount < 1)
        throw 4;

    if (specialCharCount < 1)
        throw 5;

    //cout << "Password Successfully created" << endl;

}

int main() {
    string username;
    string password;

    cout << "Enter username: ";
    cin >> username;

A:
    cout << "Enter password: ";
    cin >> password;

    try {
        isValidPassword(password);
        cout << "Password is valid." << endl;
    } catch (int error) {
        if (error == 1)
            cout << "Password must be at least 8 characters." << endl;
        else if (error == 2)
            cout << "Password must contain at least one lowercase letter." << endl;
        else if (error == 3)
            cout << "Password must contain at least one uppercase letter." << endl;
        else if (error == 4)
            cout << "Password must contain at least one digit." << endl;
        else if (error == 5)
            cout << "Password must contain at least one special symbol." << endl;

        goto A;
    }

    return 0;
}
