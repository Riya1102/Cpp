#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 1] = {0};
    int p, q, l;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> l;
        a[l] = 1;
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> l;
        a[l] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 0)
        {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }
            cout << "I become the guy." << endl;
    return 0;
}