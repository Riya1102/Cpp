#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, cnt = 0, cnt1 = 0;
        string s;
        cin >> n >> a >> b;
        cin >> s;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                cnt++;
            }
            else if (s[i] == '1')
            {
                cnt1++;
            }
        }
        cout << (a * cnt + b * cnt1) << endl;
    }
    return 0;
}