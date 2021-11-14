#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char a[2 * n];

    for (int i = 0; i < n; i++)
    {
        a[i] = '(';
    }
    for (int i = n; i < 2 * n; i++)
    {
        a[i] = ')';
    }
    for (int i = 0; i < 2 * n; i++)
    {
        cout << a[i];
    }
    cout << endl;

    return 0;
}