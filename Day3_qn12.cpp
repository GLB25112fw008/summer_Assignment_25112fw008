//find the LCM of two numbers
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n1,n2,n;
    cout<< "enter the two numbers:";
    cin>> n1 >> n2;
    n=max(n1,n2);
    while (true){
        if (n%n1==0 && n%n2==0){
            cout<< "the LCM of the two numbers is:" << n;
            break;
        }
        n++;
    }
}