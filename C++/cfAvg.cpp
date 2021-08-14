#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int a[n], sum=0, max=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum+=a[i];
            if(max<a[i])
            max=a[i];
        }
        sum-=max;
        long double ans;
        ans= (long double)sum/(n-1);

        ans+=max;
        cout<<ans<<endl;
        
    }
    return 0;
}