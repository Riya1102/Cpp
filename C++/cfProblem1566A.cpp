#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        long long n, s, res;

        cin >> n >> s;
        res = s / ((n / 2) + 1);

        cout << res << endl;
    }
    return 0;
}