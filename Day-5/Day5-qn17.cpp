//check perfect number
#include <bits/stdc++.h>
using namespace std;
int main (){
    int num ,n,sum=0;
    cout <<"Enter the number ";
    cin >> num;
    n=num;
    for (int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(num==sum){
        cout << num <<" is a perfect number";
    }
    else{
        cout <<num<<" is not a perfect number";
    }
}