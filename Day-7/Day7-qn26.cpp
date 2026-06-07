//Recursive fibonacci
#include <bits/stdc++.h>
using namespace std;
int fib(int n){
    if (n==0||n==1){
         return n;
    }
    while (n>1){
        int a=fib(n-1);
        int b=fib(n-2);
        return a+b;
    }
}
int main (){
    int n;
    cout <<"Enter the number of term you want ";
    cin >> n;
    cout << fib(n);
    
}