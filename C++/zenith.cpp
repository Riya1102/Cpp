#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m], even1 = 0, odd1 = 0, even2 = 0, odd2 = 0, sum;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            even1++;
        else
            odd1++;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        if (b[i] % 2 == 0)
            even2++;
        else
            odd2++;
    }

    if (even1 > odd2)
        sum = odd2;
    else
        sum = even1;

    if (even2 > odd1)
        sum += odd1;
    else
        sum += even2;

    cout << sum << endl;
    return 0;
}