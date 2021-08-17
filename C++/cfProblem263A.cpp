#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int R, C, a, pos = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a;
            if (a == 1)
            {
                R = i;
                C = j;
            }
        }
    }
    pos += abs(2 - R) + abs(2 - C);
    cout << pos << endl;

    return 0;
}