#include <algorithm>
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string n;
    int cnt = 0;
    getline(cin, n);

    sort(n.begin(), n.end());
    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == '{' || n[i] == '}' || n[i] == ',' || n[i] == ' ')
        {
            continue;
        }
        else
        {
            if (n[i] != n[i + 1])
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}