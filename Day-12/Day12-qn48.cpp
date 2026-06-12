//function for perfect number
#include <bits/stdc++.h>
using namespace std;
int f(int n){
    int sum = 0;
    for(int i = 1; i <= n/2; i++)
        if(n % i == 0)
            sum += i;
    if (sum == n) cout <<n <<" is a perfect number";
    else cout << n <<" is not a perfect number ";
}
int main (){
    int num;
    cout << "Enter the number ";
    cin >> num;
    f(num);
}