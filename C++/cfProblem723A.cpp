#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;
    int ar[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + 3);
    if (ar[0] < ar[1] && ar[1] < ar[2])
    {
        a = ar[1] - ar[0];
        b = ar[2] - ar[1];
        c = a + b;
    }
    cout << c << endl;
    return 0;
}