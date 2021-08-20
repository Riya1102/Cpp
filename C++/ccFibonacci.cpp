#include <iostream>
using namespace std;
int main()
{
    int num,x=0,y=1,fib=0;
    cin >> num;
    if (num == 1)
        cout << "0";
    else if (num == 2)
        cout << "0 1";
    else
    {
        cout << "0 1 ";
        for (size_t i = 0; i < num - 2; i++)
        {
            fib = x + y;
            x = y;
            y = fib;
            cout << fib << " ";

        }
    }
    return 0;
}