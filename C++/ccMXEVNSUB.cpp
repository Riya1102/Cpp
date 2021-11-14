#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, s;

        cin >> n;

        s = (n * (n + 1)) / 2;

        if (s % 2 == 0)
        {
            cout << n << endl;
        }
        else if (s % 2 != 0)
        {
            cout << n - 1 << endl;
        }
    }
    return 0;
}