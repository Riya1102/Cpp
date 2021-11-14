#include <iostream>
using namespace std;

int main()
{
    int n, a[101], cnt = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] == 1)
        {
            cnt++;
        }
    }

    if (cnt >= 1)
    {
        cout << "HARD" << endl;
    }
    else
    {
        cout << "EASY" << endl;
    }

    return 0;
}