#include <iostream>
using namespace std;

int main()
{
    int n, a = 0, d = 0;
    char s[100001];
    while(cin >> n){
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];

        if (s[i] == 'A')
        {
            a++;
        }
        else if(s[i] == 'D')
        {
            d++;
        }
    }
        if (a > d)
        {
            cout << "Anton" << endl;
        }
        else if (a < d)
        {
            cout << "Danik" << endl;
        }
        else if(a == d)
        {
            cout << "Friendship" << endl;
        }
    }
    return 0;
}