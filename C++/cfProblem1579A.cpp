#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t = 0;

    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;

        int p = 0, q = 0, r = 0;
        for (int i = 0; i < s.length(); i++)
        {

            if (s[i] == 'A')
            {
                p++;
            }
            else if (s[i] == 'B')
            {
                q++;
            }
            else if (s[i] == 'C')
            {
                r++;
            }
        }
        t = p + r;
        if (t == q)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}