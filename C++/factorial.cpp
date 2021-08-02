#include <iostream>
using namespace std;

int main(){
    int n, fact = 1;
    cout << "Enter n : ";
    cin >> n;

    for(int i=1; i<=n; i++){
        fact *=i;
    }
    cout << "Factorial of "<<n<<" natural numbers is "<< fact <<endl;

    return 0;
}