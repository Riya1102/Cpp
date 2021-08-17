#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string s1 = s;
    string s2 = s;
    while (n--)
    {

        if (s[0] == '?')
        {
            s1[0] = 'R';
            s2[0] = 'B';
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '?')
            {
                if (s1[i - 1] == 'B')
                {
                    s1[i] = 'R';
                }
                else
                {
                    s1[i] = 'B';
                }
                if (s2[i - 1] == 'B')
                {
                    s2[i] = 'R';
                }
                else
                {
                    s2[i] = 'B';
                }
            }
        }
    }
    int imp1 = 0;
    int imp2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s1[i - 1] == s1[i])
        {
            imp1++;
        }
        if (s2[i - 1] = s2[i])
        {
            imp2++;
        }
    }
    if (imp1 < imp2)
    {
        cout << s1 << endl;
    }
    else
    {
        cout << s2 << endl;
    }

    return 0;
}