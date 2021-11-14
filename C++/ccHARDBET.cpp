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

        if (c > b && a > b)
        {
            cout << "Bob" << endl;
        }
        else if (b > c && a > c)
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Draw" << endl;
        }
    }
    return 0;
}