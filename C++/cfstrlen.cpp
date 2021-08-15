#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n, l;
    cin >> n;
    char c[100];
    while (n--)
    {
        cin >> c;
        l = strlen(c);

        if (l > 10)
        {
            cout << c[0] << l - 2 << c[l - 1] << endl;
        }
        else
        {
            cout << c << endl;
        }
    }
    return 0;
}