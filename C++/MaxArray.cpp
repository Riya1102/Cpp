#include <iostream>
using namespace std;

int main(){
    int A[7]={4,5,3,6,7,2,8};
    int n=7, max;
    max = A[0];

    for(int i=0; i<7; i++){
        if(A[i]>max){
            max = A[i];
        }
    }
    cout<<"Maximum number is "<<max;

    return 0;
}