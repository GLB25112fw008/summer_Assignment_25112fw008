//Recursive sum of digits
#include <bits/stdc++.h>
using namespace std;
int f(int n){
    if (n==0) return 0;
    while (n>0){
        return n%10+f(n/10);
    }

}
int main (){
     int n;
    cout <<"Enter the number ";
    cin >> n;
    cout << "sum of digits of "<< n << " is "<< f(n);
    
}