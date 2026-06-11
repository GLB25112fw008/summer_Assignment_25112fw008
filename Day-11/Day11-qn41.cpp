//function to find sum of two numbers
#include <bits/stdc++.h>
using namespace std;
int fsum(int n1,int n2){
    return n1+n2;
}
int main (){
    int n1,n2;
    cout << "Enter the two numbers ";
    cin >> n1>>n2;
    cout << "sum of "<<n1<<" and "<<n2<<" is "<<fsum(n1,n2);
}