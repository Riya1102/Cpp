#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == b && a == c)
        {
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl;
        }
        else if (a == b && a > c)
        {
            cout << "YES" << endl;
            cout << a << " " << 1 << " " << c << endl;
        }
        else if (a == c && a > b)
        {
            cout << "YES" << endl;
            cout << a << " " << b << " " << 1 << endl;
        }
        else if (b == c && b > a)
        {
            cout << "YES" << endl;
            cout << a << " " << b << " " << 1 << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}