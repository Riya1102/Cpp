#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s;
    int u = 0, l = 0;

    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 97)
        {
            l++;
        }
        else if (s[i] < 97)
        {
            u++;
        }
    }

    if (u > l)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 97)
            {
                s[i] = s[i] - 32;
            }
        }
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] < 97)
            {
                s[i] = s[i] + 32;
            }
        }
    }
    cout << s << endl;

    return 0;
}