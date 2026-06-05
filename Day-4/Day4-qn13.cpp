// Generate fibonacci series
#include <bits/stdc++.h>
using namespace std;
int main (){
    int a=0,b=1,c,num;
    cout <<"Enter the number :";
    cin >> num;
    cout << "The Fibonacci series is :";
    for (int i=0;i<num;i++){
        cout << a << "\t";
        c=a+b;
        a=b;
        b=c;
    }
}