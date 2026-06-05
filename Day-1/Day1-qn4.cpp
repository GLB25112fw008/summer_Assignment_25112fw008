//count digit in a given number
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i=0;
    cout << "Enter the number :";
    cin >> n;
    int num=n;
    while(n>0){
        n=n/10;
        i++;       

    }
    cout << "The number of digits in " << num << " is: " << i;
    return 0;
}