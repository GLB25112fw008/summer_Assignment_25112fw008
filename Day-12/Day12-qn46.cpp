//function for armstrong
#include <bits/stdc++.h>
using namespace std;
int f(int num){
     int n = num;
    int digits = 0;
    int sum = 0;
    // Count digits
    int temp = num;
    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    // Calculate sum of powers of digits
    temp = num;
    while (temp > 0)
    {
        int a = temp % 10;
        sum += pow(a, digits);
        temp /= 10;
    }

    if(sum == n) cout << num<<" is a armstrong number";
    else cout << num <<" is not a armstrong number";
}
int main (){
    int num;
    cout << "Enter the number ";
    cin >> num;
    f(num);
}