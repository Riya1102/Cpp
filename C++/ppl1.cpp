#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s, int n)
{
    char c[n];
    for (int i = 0; i < n; i++)
    {
        c[i] = s[i];
    }
    for (int i = 0; i < n / 2; i++)
    {
        if (*(c + i) != *(c + n - 1 - i))
        {
            return 0;
        }
    }
    return 1;
}
int countPalindromes(string s, int n)
{
    char c[n];
    for (int i = 0; i < n; i++)
    {
        c[i] = s[i];
    }
    string word = "";
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(c + i) == ' ')
        {
            if (checkPalindrome(word, word.length()))
            {
                if (word.length() > 1)
                {
                    ans++;
                }
            }
            word = "";
        }
        else
        {
            word.push_back(*(c + i));
        }
    }
    if (checkPalindrome(word, word.length()))
    {
        if (word.length() > 1)
        {
            ans++;
        }
    }
    return ans;
}

int main()
{
    string s;
    cout << "Enter the sentence(remember count  is case sensitive).\n";
    getline(cin, s);
    fflush(stdin);
    cout << "\nTotal number of palindrome numbers :" << countPalindromes(s, s.length())<<endl;
    return 0;
}