#include <iostream>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    int cnt = 0;

    cin >> s;
    for (int i = 0; i < n; i++)
    {
        // cin >> s[i];

        if (s[i] == s[i + 1])
        {
            cnt++;
        }
        // if (s[i] != s[i + 1])
        // {
        //     cout << "0";
        // }
    }
    cout << cnt;
    return 0;
}