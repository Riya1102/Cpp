#include <iostream>
using namespace std;

int main()
{
    int k, n, w, cost, res = 0;

    cin >> k >> n >> w;

    cost = k * ((w * w + w) / 2);
    res = cost - n;

    if (res > 0)
    {
        cout << res << endl;
    }
    else
    {
        cout << "0" << endl;
    }
    return 0;
}