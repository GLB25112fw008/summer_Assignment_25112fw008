//Recursive reverse number
#include <bits/stdc++.h>
using namespace std;
int f(int n,int rev=0){
    if (n==0) return rev;
    
    return f(n/10,rev*10 +n%10);
}
int main (){
    int n;
    cout <<"Enter the number ";
    cin >> n;
    cout << "reverse of "<< n << " is "<< f(n);
    
}