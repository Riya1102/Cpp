#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;

        cin >> a >> b;

        if (b < a * 2)
        {
            cout << b - 1 << endl;
        }
        else
        {
            cout << (b - 1) / 2 << endl;
        }
    }

    return 0;
}