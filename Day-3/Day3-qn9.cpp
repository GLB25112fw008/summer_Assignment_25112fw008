//find whether the number is prime or not
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,prime=0;
    cout<< "enter the number:";
    cin>> n;
    for (int i=2;i<=n/2;i++){
        if (n%i==0){
            prime=1;
            break;
        }
    }
    if (prime==0){
        cout<< "the number is prime";
    }
    else{
        cout<< "the number is not prime";
    }
}