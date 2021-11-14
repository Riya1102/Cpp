#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, k = 0;
        cin >> a >> b;
        k = abs(a - b);

        if (a == b)
        {
            cout << "0" << endl;
        }
        else if (k % 10 == 0)
        {
            cout << k / 10 << endl;
        }
        else
        {
            cout << (k / 10) + 1 << endl;
        }
    }
    return 0;
}