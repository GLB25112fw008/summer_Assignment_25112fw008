//multiplication table of a given number
#include <bits/stdc++.h>
using namespace std;
int main(){
    int i=1,n,mult=0;
    cout << "Enter the number :";
    cin >> n;
    while(i<=10){
        mult = n*i;
        cout << n << " x " << i << " = " << mult << endl;
        i++;
    }
}