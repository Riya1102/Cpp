#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return fact(n - 1) * n;
    }
}

int main()
{
    int r, n;
    cin >> n;
    r = fact(n);

    cout << r;

    return 0;
}