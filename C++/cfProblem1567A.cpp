#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, res = "";
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                res = res + 'L';
            }
            else if (s[i] == 'R')
            {
                res = res + 'R';
            }
            else if (s[i] == 'U')
            {
                res = res + 'D';
            }
            else if (s[i] == 'D')
            {
                res = res + 'U';
            }
        }
        cout << res << endl;
    }
    return 0;
}