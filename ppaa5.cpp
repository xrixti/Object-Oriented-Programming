#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int max_passengers = 0;
    int passengers = 0;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;


        passengers = passengers - a + b;


        if (passengers > max_passengers)
        {
            max_passengers = passengers;
        }
    }

    cout << max_passengers << endl;

    return 0;
}
