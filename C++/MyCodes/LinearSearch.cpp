#include <iostream>
using namespace std;

int main(){
    int A[8], n=8, key;

    cout<<"Enter numbers : ";
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    cout<<"Enter key : ";
    cin>>key;

    for(int i=0; i<n; i++){
    if(key==A[i]){
        cout<<"Key is found at "<<i;
    }
    }
    return 0;
}