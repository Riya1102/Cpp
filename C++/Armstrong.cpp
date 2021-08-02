#include <iostream>
using namespace std;

int main(){
    int n, r, sum=0, m;
    cout<<"Enter n : ";
    cin>>n;
    m=n;     //by initializing m=n we are preserving m=153 as n becomes 0 by following the loop
    while(n>0){
        r=n%10;
        n=n/10;
        sum = sum+r*r*r;
    }
    if(sum==m){
        cout<<"It is armstrong number";
    }
    else{
        cout<<"It's not a armstrong number";
    }
    return 0;
}