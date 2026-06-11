//function to check prime
#include <bits/stdc++.h>
using namespace std;
int fprime(int n,int prime=0){
    for (int i=2;i<n/2;i++){
        if(n%i==0) {
            prime=1;
            break;
        }
    }
    if (prime==0) cout<< n <<" is a prime" ;
    else cout << n<<  " is not a prime";
}
int main (){
    int n;
    cout << "Enter the number ";
    cin >> n;
    fprime(n);
}