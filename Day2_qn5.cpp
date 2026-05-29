//sum of the digits of a number 
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,a,sum=0;
    cout << "Enter the number :";
    cin >> n;
    while(n>0){
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    cout << "The sum of the digits is: " << sum;
}