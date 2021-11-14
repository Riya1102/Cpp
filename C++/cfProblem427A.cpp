#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0, unt = 0;
    cin >> n;
    while (n--)
    {
        int t;
        cin >> t;

        if (t > 0)
        {
            cnt += t;
        }
        else if (t < 0)
        {
            if (cnt > 0)
            {
                cnt--;
            }
            else
            {
                unt++;
            }
        }
    }
    cout << unt << endl;
    return 0;
}