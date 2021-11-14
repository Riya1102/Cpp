#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string n, t;

    cin >> n >> t;
    reverse(t.begin(), t.end());

    if (n == t)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}