#include <iostream>
using namespace std;

int main(){
    int n, rem;
    int A[15], i=0;
    cout<<"Enter n : ";
    cin>>n;

    while(n!=0){
        rem=n%2;
        n=n/2;
        A[i]=rem;
        i++;
    }

    for(int j=i-1; j>=0; j--){
        cout<<A[j];
    }
   
return 0; 
}