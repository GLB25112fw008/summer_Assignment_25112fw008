//Check strong number
#include <bits/stdc++.h>
using namespace std;
int main (){
    int num ,n,sum=0,fact=1;
    cout <<"Enter the number ";
    cin >> num;
    n=num;
    while(n>0){
        int a=n%10;
        for (int i=1;i<=a;i++){
            fact*=i;
        }
        sum+=fact;
        n=n/10;
        fact=1;
    }
    if(num==sum){
        cout << num <<" is a strong number";
    }
    else {
        cout<< num <<" is not a strong number";
    }
}
