#include <iostream>
using namespace std;

int main()
{
    int t, i, a, b, mi = 0, cr = 0;
    while (cin >> t)
    {
        for (i = 0; i < t; i++)
        {
            cin >> a >> b;
            if (a > b)
                mi++;
            else if (b > a)
                cr++;
        }
        if (mi > cr)
            cout << "Mishka" << endl;
        else if (cr > mi)
            cout << "Chris" << endl;
        else
            cout << "Friendship is magic!^^" << endl;
        //c = 0, m = 0;
    }

    //c = 0, m = 0;
    return 0;
}