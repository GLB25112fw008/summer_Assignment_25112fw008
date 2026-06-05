//find the GCD of two numbers
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n1,n2,n;
    cout<< "enter the two numbers:";
    cin>> n1 >> n2;
    n=min(n1,n2);
    for (int i=n;i>=1;i--){
        if (n%i==0){
            cout<< "the GCD of the two numbers is:" << i;
            break;
        }
    }
}