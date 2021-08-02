#include <iostream>
using namespace std;

int main(){
    int A[7]={1,5,3,2,4,7,8};
    int n=7, sum=0;

    for(int i=0; i<7; i++){
        sum = sum+ A[i];
    }
    cout<<"Sum is "<<sum;

    return 0;
}