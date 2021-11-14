#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a;
    cin >> n >> a;
    int mina = a, maxa = a, mini_value = 0, maxi_value = 0;
    for (int i = 1; i < n; ++i)
    {
        cin >> a;
        if (a > maxa)
        {
            maxa = a;
            maxi_value = i;
        }
        if (a <= mina)
        {
            mina = a;
            mini_value = i;
        }
    }
    cout << maxi_value + (n - 1 - mini_value) - (mini_value < maxi_value ? 1 : 0) << endl;
    return 0;
}