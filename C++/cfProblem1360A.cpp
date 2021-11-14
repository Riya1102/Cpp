#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a > b)
        {
            swap(a, b);
        }
        int k = max(a * 2, b);
        cout << k * k << endl;
    }
    return 0;
}