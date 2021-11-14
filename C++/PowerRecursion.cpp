#include <iostream>
#include <math.h>
using namespace std;

int pow(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return pow(m, n - 1) * m;
    }
}

int main()
{
    int r, m, n;
    cin >> m >> n;
    r = pow(m, n);

    cout << r;
    return 0;
}