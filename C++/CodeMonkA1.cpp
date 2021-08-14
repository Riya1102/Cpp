#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k, p;
        cin>>n;
        int A[n];
        cin>>k;
        for(int i=0; i<n; i++){
            cin>>A[i];
        }

    for(int i=0;i<n;i++)
          {
               p = A[(i+(n-k))%n];
               cout<<p<<" ";
          } cout<<"\n";
    }
return 0;
}