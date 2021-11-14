#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, res, c, sum;
    while (cin >> n >> k)
    {
        res = 240 - k, c = 0, sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum += 5 * i;

            if (sum > res)
                break;

            c = c + 1;
        }
        cout << c << endl;
    }
    return 0;
}