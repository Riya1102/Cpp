#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        int s = 0, r = 0;
        for (int i = 0; i < 7; i++)
        {

            cin >> x;
            if (x == 1)
            {
                s++;
            }
            else
            {
                r++;
            }
        }
        if (s > r)
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