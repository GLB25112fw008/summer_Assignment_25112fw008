//  Print number pyramid
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
    //for left side numbers
    for(int j=1;j<=i+1;j++){
            cout << " "<<j<<" ";
    }
    //for right side numbers
    for (int j=i;j>0;j--){
        cout << " "<<j<<" ";
    }
    cout << endl;
}
}