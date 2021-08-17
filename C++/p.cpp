#include <iostream>
using namespace std;

int main()
{
    int *ptr;

    ptr = new int[5];
    for (int i = 0; i < 5; i++)
    {
        ptr[i] = i;

        cout << ptr[i] << ' ';
    }

    return 0;
}