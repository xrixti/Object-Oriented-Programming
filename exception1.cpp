#include <iostream>

using namespace std;

class Divider {
public:
    double divide(double dividend, double divisor) {
        if (divisor == 0)
            throw "Error: Division by zero!";
        return dividend / divisor;
    }
};

int main() {
    double a, b;

    cout << "Enter the dividend: ";
    cin >> a;

    cout << "Enter the divisor: ";
    cin >> b;

    Divider divider;

    try {
        double result = divider.divide(a, b);
        cout << "Result: " << result << endl;
    } catch (const char* errorMessage) {
        cout << "Exception caught: " << errorMessage << endl;
    }

    return 0;
}
