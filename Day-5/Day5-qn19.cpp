//print factor of a number
#include <bits/stdc++.h>
using namespace std;
int main (){
    int num;
    cout <<"Enter the number ";
    cin >> num;
    cout << "Factor of "<<num<< " is equal to ";
    for (int i=1;i<=num;i++){
        if(num%i==0){
            cout<<i <<"\t";
        }
    }
}
