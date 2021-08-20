#include <iostream>
using namespace std;

int main()
{
    int n, r;

    cin >> n;

    r = n / 5;

    if(n%5 != 0){
        r += 1;
    }

    cout << r  << endl;

    return 0;
}