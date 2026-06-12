//function for fibonacci
#include <bits/stdc++.h>
using namespace std;
int fib(int num){
    int a=0,b=1,c;
    cout << "Fibonacci series :- ";
    for(int i=1;i<=num;i++)
    {
        cout << a<< " ";
        c=a+b;
        a=b;
        b=c;
    }
}
int main (){
    int num;
    cout <<"Enter the number ";
    cin >> num;
    fib(num);
}