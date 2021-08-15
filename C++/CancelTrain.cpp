#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int train1[n], train2[m];
        for (int i = 0; i < n; i++)
        {
            cin >> train1[i];
        }
        for (int j = 0; j < m; j++)
        {
            cin >> train2[j];
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (train1[i] == train2[j])
                {
                    ans++;
                }
            }
        }

        cout << ans;
    }

    return 0;
}