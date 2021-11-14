#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int o = 0, e = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 != a[i] % 2)
            {
                if (a[i] % 2 == 1)
                {
                    o++;
                }
                else
                {
                    e++;
                }
            }
        }
        if (o == e)
        {
            cout << o << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}