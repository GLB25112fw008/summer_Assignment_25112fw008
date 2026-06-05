// to find the product of digits of a number
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,a,prod=1;
    cout << "Enter the number :";
    cin >> n;
    while(n>0){
        a=n%10;
        prod=prod*a;
        n=n/10;
    }
    cout << "The product of the digits is: " << prod;
}