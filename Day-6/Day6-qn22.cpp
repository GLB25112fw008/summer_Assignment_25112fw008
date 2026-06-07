//convert binary to decimal 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int bin,dec=0,base=1,rem;
    cout <<"Enter the binary number ";
    cin >> bin;
    while (bin >0){
        rem=bin%10;
        dec=dec+rem*base;
        base=base*2;
        bin=bin/10;
    }
    cout << "Decimalnumber = "<<dec;
}