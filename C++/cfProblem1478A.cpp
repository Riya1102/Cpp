
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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int m = 0;
        for(int i = 0; i<n; i++){
            int cnt = 0;
            for(int j = 0; j<n; j++){
                if(a[i]==a[j]){
                    cnt++;
                }
                m = max(m, cnt);
            }
        }
        cout << m << endl;
    }
    return 0;
}