#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A[4][3] = {{5, 7, 5},
                    {4, 6, 3},
                    {2, 9, 0},
                    {3, 6, 8}};
    int *a;
    a = &A[0][0];
    
    a+=6;cout << (*a)<<endl;
    a+=9;cout << (*a);
    return 0;
}