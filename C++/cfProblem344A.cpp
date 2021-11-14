#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a[100001], cnt = 0;

    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < t; i++)
    {
        if (a[i] != a[i + 1])
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}