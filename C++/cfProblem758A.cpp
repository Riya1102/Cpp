#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int max1 = 0;
    long long int ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        max1 = max(a[i], max1);
    }
    for (int i = 0; i < n; i++)
    {
        ans += max1 - a[i];
    }

    cout << ans << endl;

    return 0;
}