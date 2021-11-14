#include <iostream>
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;

    while (n--)
    {
        int n, k, ans = 0;
        cin >> n >> k;

        if (k > n)
        {
            ans = k - n;
        }
        else if ((n + k) % 2 == 1)
        {
            ans = 1;
        }
        cout << ans << endl;
    }
    return 0;
}