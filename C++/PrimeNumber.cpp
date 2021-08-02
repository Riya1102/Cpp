#include <iostream>
using namespace std;

int main(){
    int n, count=0;
    cout<<"Enter n : ";
    cin>>n;

    for(int i=1; i<=n; i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<"It is a prime number";
    }
    else{
        cout<<"It's not a prime number";
    }
    return 0;
}