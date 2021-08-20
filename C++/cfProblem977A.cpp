#include <iostream>
using namespace std;

int main()
{
    int n, k, r;
    cin >> n >> k;

    for (int i = 0; i < k; i++)
    {
        r = n % 10;

        if (r != 0)
        {
            n -= 1;
        }
        else if (r == 0)
        {
            n /= 10;
        }
    }
    cout << n << endl;

    return 0;
}