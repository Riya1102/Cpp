#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       long long int a, b, c, m;
        cin >> a >> b >> c >> m;
        long long int ar[3] = {a, b, c};
        sort(ar, ar+3);

        if (m > (a + b + c - 3))
        {
            cout << "NO" << endl;
        }
        else
        {
           long long int r = ar[2] - (ar[1] + ar[0] + 1);
            if (m >= r)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}