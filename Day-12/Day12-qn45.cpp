//function for palindrome
#include <bits/stdc++.h>
using namespace std;
void f(int n1,int n2,int pal=0,int a=0){
    while(n1>0){
        a=n1%10;
        pal=pal*10+a;
        n1=n1/10;
    }
    if(pal==n2) cout << n2 <<" is a palindrome";
    else cout << n2 <<" is not a palindrome";
}
int main (){
    int n1;
    cout << "Enter the number ";
    cin >> n1;
    f(n1,n1);
}