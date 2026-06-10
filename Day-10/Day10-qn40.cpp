//Print character pyramid
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
    //for left side character 
    for(char ch='A';ch<=i+'A';ch++){
            cout <<" "<< ch <<" ";
    }
    //for right side character
    for (char ch='A'+(i-1);ch>'A'-1;ch--){
        cout <<" "<< ch <<" ";
    }
    cout << endl;
}
}