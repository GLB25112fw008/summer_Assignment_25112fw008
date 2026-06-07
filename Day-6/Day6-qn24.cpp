//Find x^n without using pow()
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,r=1,b ;
    cout << "Enter the power and base of a number  ";
    cin >> num>>b ;
    for (int i=1;i<=num;i++){
        r=r*b;
    }
    cout << r;
}