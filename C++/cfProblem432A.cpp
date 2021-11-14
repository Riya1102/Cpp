#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, p, v = 0;

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> p;

        if (p + k <= 5)
        {
            v++;
        }
    }
    cout << v / 3;

    return 0;
}
