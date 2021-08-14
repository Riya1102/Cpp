#include <iostream>
using namespace std;

int search(int A[], int n, int k){
    for(int i=0; i<n; i++){
        if(k== A[i])
        return i;
    }
    return 0;   
}
int main(){
    int A[8], n=8, k;
    cout<<"Enter numbers :";
    for(int i=0; i<n; i++){
        cin>>A[i];
    }

    cout<<"Enter an element to be searched : ";
    cin>>k;

    int index= search(A, 8, k);
    cout<<"Element is found at index : "<<index<<endl;

}