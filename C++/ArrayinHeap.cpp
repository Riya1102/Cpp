#include <iostream>
using namespace std;

int main(){
    int *p=new int[5];
    p[0]= 12;
    p[1]= 13;

    cout<<p[0]<<endl;

    delete []p;
    p= nullptr;

    return 0;

}