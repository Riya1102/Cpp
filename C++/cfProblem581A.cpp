#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, m, m1;
    cin >> a >> b;

    m = min(a, b);
    m1 = max(a, b);

    cout << m << " " << (m1 - m) / 2 << endl;

    return 0;
}