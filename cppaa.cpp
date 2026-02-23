#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int n;
        string player;
        cin >> n >> player;

        if (player == "Alice")
        {
            if (n % 3 == 1)
            {
                cout << "Case " << i << ": Bob\n";
            }
            else
            {
                cout << "Case " << i << ": Alice\n";
            }
        }
        else
        {
            if (n % 3 == 0)
            {
                cout << "Case " << i << ": Alice\n";
            }
            else
            {
                cout << "Case " << i << ": Bob\n";
            }
        }
    }

    return 0;
}
