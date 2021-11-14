#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;
    int i = 2, cnt = 1, val = k;
    while (true)
    {
        if (val % 10 == 0)
        {
            cout << cnt;
            break;
        }
        if (val % 10 == r)
        {
            cout << cnt;
            break;
        }
        val = k * i;
        cnt++;
        i++;
    }
    return 0;
}