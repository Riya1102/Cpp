#include <iostream>
using namespace std;

int main()
{
    int T, G1, S1, B1, G2, S2, B2, sum1=0, sum2=0;

       cin>>T;
    
        for(int i=1; i<=T; i++){
            cin>>G1 >>S1 >>B1 >>G2 >>S2 >>B2;
        
       
           sum1=G1+S1+B1;
           sum2=G2+S2+B2;  
           if(sum1>sum2){
               cout<<"1"<<endl;
           }
           else cout<<"2"<<endl; 
        }

    return 0;
}

           