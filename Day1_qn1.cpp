#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i=0,sum=0;
    cout << "Enter the number of natural numbers: ";
    cin >> n;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout << "The sum of first " << n << " natural numbers is: " << sum;
    return 0;
}