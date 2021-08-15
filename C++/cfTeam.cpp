#include <iostream>
using namespace std;

int main()
{
    int n, c = 0, p, v, t;
    cin >> n;
    while (n--)
    {
        cin >> p >> v >> t;

        if (p == 1 && v == 1)
        {
            c++;
        }
        else if (p == 1 && t == 1)
        {
            c++;
        }
        else if (v == 1 && t == 1)
        {
            c++;
        }
        else
        {
            continue;
        }
    }
    cout << c;
    return 0;
}