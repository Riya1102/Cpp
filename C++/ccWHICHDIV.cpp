#include <iostream>
using namespace std;
int main()
{
    int t, r;
    cin >> t;
    while (t--)
    {

        cin >> r;

        if (r <= 4500 && r >= 2000)
        {
            cout << "1" << endl;
        }
        else if (r < 2000 && r >= 1600)
        {
            cout << "2" << endl;
        }
        else if (r < 1600 && r >= 1000)
        {
            cout << "3" << endl;
        }
    }
    return 0;
}