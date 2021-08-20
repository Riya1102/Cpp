#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    int t, res, len;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n >> a;

        res = sqrt(n);

        len = res * a;

        cout << len << endl;
    }
    return 0;
}