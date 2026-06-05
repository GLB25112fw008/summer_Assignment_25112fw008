// to check whether a number is palindrome or not
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,a,rev=0,temp;
    cout << "Enter the number :";
    cin >> n;
    temp=n;
    while(n>0){
        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }
    if(temp==rev){
        cout << "The number is a palindrome.";
    }
    else{
        cout << "The number is not a palindrome.";
    }
}