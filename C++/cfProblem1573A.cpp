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
        string s;
        cin >> s;
        int a = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != '0')
            {
                a += (s[i] - '0');
                if (i != n - 1)
                {
                    a++;
                }
            }
        }
        cout << a << endl;
    }
    return 0;
}