#include <iostream>
using namespace std;

int main()
{
    int n, ans;
    string s;
    // int Icosahedron=20,Cube=6,Tetrahedron=4,Dodecahedron=12,      Octahedron=8;
    while (cin >> n)
    {
        ans = 0;
        while (n--)
        {
            cin >> s;
            if (s == "Tetrahedron")
            {
                ans += 4;
            }
            else if (s == "Cube")
            {
                ans += 6;
            }
            else if (s == "Octahedron")
            {
                ans += 8;
            }
            else if (s == "Dodecahedron")
            {
                ans += 12;
            }
            else if (s == "Icosahedron")
            {
                ans += 20;
            }
        }
        cout << ans << endl;
    }
    return 0;
}