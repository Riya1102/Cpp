#include <iostream>
using namespace std;

int main(){
    int n, sum = 0;
    cout<<"Enter the number ";
    cin>>n;

    for(int i=1; i<=n; i++){
        if(n%i == 0)
        cout<<i<<endl;

    }
    cout <<"Sum of factors : ";
    for(int i=1; i<=n; i++){
        if(n%i == 0){
        sum +=i;
        cout<< sum << " ";
    }
    }
    return 0;
}