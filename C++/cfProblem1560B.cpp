#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b, c, n, r;
        cin>>a>>b>>c;

        r = abs(a-b);
        n = r*2;

        if(a>n || b>n || c>n){
            cout << "-1" << endl;
        }
        else if(c+r<=n){
            cout<<c+r<<endl;
        }
        else if(c-r<=n && c-r>0){
            cout << c-r << endl;
        }
        else{
            cout << "-1" << endl;
        }

    }
    return 0;
}