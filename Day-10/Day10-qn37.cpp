//Print star pyramid
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cout << "Enter the number of rows ";
    cin >> n;
    for (int i=0;i<n;i++){
    //for space 
    for(int j=0;j<n-i-1;j++){
            cout << "   ";
    }
    //for star
    for(int j=0;j<2*i+1;j++){
            cout << " * ";
    }
    cout << endl;
}
}