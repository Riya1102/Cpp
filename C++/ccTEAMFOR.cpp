#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int a[4];
    while(t--){
        int n;
        cin>>n;

        string s, t;
        cin >> s >> t;

        //int a[4];
        //memset(a, 0, sizeof(a));

        for(int i =0; i<n; i++){
            if(s[i]=='0' && t[i]=='0'){
                a[0]++;
            }
            else if(s[i]=='0' && t[i]=='1'){
                a[1]++;
            }
            else if(s[i]=='1' && t[i] == '0'){
                a[2]++;
            }
            else {
                a[3]++;
            }
        }
    }

    int ans = min (a[3], a[0]);
    a[3] += ans;
    a[0] += ans;

    int temp = min(a[1], a[2]);
    ans +=temp;

    a[1] -= temp;
    a[2]  -= temp;

    if(a[1] > 0){
        int t = min(a[3], a[1]);
        ans += t;
        a[3] -= t;
        a[1] -= t;

        ans += a[3]/2;
    }
    else{
        int t = min(a[3], a[2]);
        ans += t;
        a[3] -= t;
        a[2] -= t;

        ans += a[3]/2;
    }
    //cout << ans << endl;

    cout << ans << endl;
    return 0;
}