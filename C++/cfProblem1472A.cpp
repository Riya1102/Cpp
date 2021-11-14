#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, w, h, n, cnt;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> w >> h >> n;

        cnt = 1;

        while (w > 0 && w % 2 == 0)
        {
            cnt = cnt * 2;
            w = w / 2;
        }
        while (h > 0 && h % 2 == 0)
        {
            cnt = cnt * 2;
            h = h / 2;
        }
        if (cnt >= n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}