//print armstrong number in a given range 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,n2,n1,a,b;
    cout<<"Enter the range of 3 digit numbers:(a<b)";
    cin >>a>>b;
    n1=a;
    n2=b;
    for(int i=a; i<=b; i++){
    int temp = i;
    int sum = 0;

    while(temp > 0){
        n= temp % 10;
        sum += pow(n, 3);
        temp /= 10;
    }

    if(sum == i){
        cout << i << " is an Armstrong number"<< endl;
    }
    }
}