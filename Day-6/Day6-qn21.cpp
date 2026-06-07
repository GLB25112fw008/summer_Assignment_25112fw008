// covert from decimal to binary
#include <bits/stdc++.h>
using namespace std;
int main (){
    int num,binary[50],i=0;
    cout <<"Enter the decimal number ";
    cin >> num;
    if (num==0){
        cout <<"Binary = 0";
    }
    while (num>0){
        binary[i]=num%2;
        num=num/2;
        i++;
    }
    cout <<"Binary = ";
    for (int j=i-1;j>=0;j--){
        cout <<binary[j];
    }
}