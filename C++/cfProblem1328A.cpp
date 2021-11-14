#include <iostream>
using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n;

    while (n--)
    {
        cin >> a >> b;

        if (a % b == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            c = a % b;

            cout << b - c << endl;
        }
    }
    return 0;
}