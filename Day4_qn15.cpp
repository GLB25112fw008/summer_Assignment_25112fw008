//Check armstrong number
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,ln=0,n,sum=0,n1;
    cout<<"Enter the number:";
    cin >>num;
    n=num;
    while(n>0){
        n=n/10;
        ln++;
    }
    n1=num;
    for (int i=0;i<ln;i++){
        int a=n1%10;
        sum=sum+pow(a,ln);
        n1=n1/10;
    }
        if (num==sum){
        cout << num <<"is an armstrong number ";
        }
        else {
        cout << num <<"is not an armstrong number" ;
        }
}