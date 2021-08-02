#include <iostream>
using namespace std;

int main(){
    int n, choice, rem, m;
    int A[15], i=0;
    char hexa[20];

    cout<<"Enter an integer in decimal number system : ";
    cin>>n;
    m=n;

    cout<<"1. Convert "<<n<<" to binary system"<<endl;
    cout<<"2. Convert "<<n<<" to octal system"<<endl;
    cout<<"3. Convert "<<n<<" to hexadecimal system"<<endl;

    cout<<"Enter your choice : ";
    cin>>choice;

    switch(choice){
        case 1: while(n>0){
                rem=n%2;
                n=n/2;
                A[i]=rem;
                i++;
    }
    for(int j=i-1; j>=0; j--){
         cout<<A[j];
    }
        break;
        case 2: while(n>0){
                rem=n%8;
                n=n/8;
                A[i]=rem;
                i++;
    }
    for(int j=i-1; j>=0; j--){
         cout<<A[j];
    }
        break;
        case 3: while(n>0){
                rem=n%16;
                if(rem<10)
                    hexa[i++]=48 + rem;
                else
                    hexa[i++]=55 + rem;
                n=n/16;
    }
    for(int j=i-1; j>=0; j--){
         cout<<hexa[j];
    }
        break;
    }

    return 0;
}