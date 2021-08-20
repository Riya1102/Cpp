#include <iostream>
using namespace std;

int main()
{
    int t, res = 0;
    cin >> t;
    while (t--)
    {
        int k;
        cin>>k;

        int i=0, a=1;
        while(i<k){
            if(a%3!=0 && a%10!=3){
                res = a; 
                i++;
            }
            a++;
        }
        cout << res << endl;
       
    }

    return 0;
}
