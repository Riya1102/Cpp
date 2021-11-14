#include <iostream>
using namespace std;

int main()
{
    int n, m, t=1;
    cin >> n >> m;
    char s[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((i + 1) % 2 == 0)
            {
                s[i][j] = '.';
            }
            else
                s[i][j] = '#';
        }
    }

    for (int i = 1; i < n; i += 2)
    {
        if (t == 1)
        {
            s[i][m - 1] = '#';
            t = 0;
        }
        else
        {
            s[i][0] = '#';
            t = 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << s[i][j];
        }
        cout << endl;
    }
    return 0;
}
