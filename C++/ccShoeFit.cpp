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

        if (a == b && a == c && b == c)
        {
            cout << "0" << endl;
        }
        else if (a == b && b != c || a == c && b != c || a != b && b == c)
        {
            cout << "1" << endl;
        }
    }
    return 0;
}