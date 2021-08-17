#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int temp;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '+')
        {
            if (s[i] > s[i + 1])
            {
                temp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = temp;
            }
        }
          cout << s[i];  
    }

   
    return 0;
}