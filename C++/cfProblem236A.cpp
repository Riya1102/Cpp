#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main()
{
    char s[101];
    cin >> s;
    int l = strlen(s);
    sort(s, s + l);
    int cnt = 0;
    for (int i = 0; i < l; i++)
    {
        if (s[i] != s[i + 1])
        {

            cnt++;
        }
    }
    if (cnt % 2 != 0)
    {
        cout << "IGNORE HIM!" << endl;
    }
    else
    {
        cout << "CHAT WITH HER!" << endl;
    }

    return 0;
}