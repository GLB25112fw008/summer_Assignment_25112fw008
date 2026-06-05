//Find largest prime factor
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cout <<"Enter the number ";
    cin >> n;
    int maxp=-1;
    while(n%2==0){
        maxp=2;
        n=n/2;
    }
    for (int i=3;i<=sqrt(n);i+=2){
        while(n%i==0){
            maxp=i;
            n=n/i;
        }
    }
    if(n>2){
        maxp=n;
    }
    cout << "Largest prime factor is "<<maxp;
}