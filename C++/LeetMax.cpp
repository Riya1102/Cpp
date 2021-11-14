#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[n];
    n = sizeof(a) / sizeof(a[0]);
    vector<int> vect(a, a + n);
    for (int i = 0; i < n; i++)
    {
        cin >> vect[i];
    
    
    int m = 0;
    m = *max_element(vect.begin(), vect.end());

    vect.pop_back(m);
    }
    int m1 = *max_element(vect.begin(), vect.end());

    if (m == 2 * m1)
    {
        cout << "1" << endl;
    }
    else if (m != 2 * m1)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }
    return 0;
}