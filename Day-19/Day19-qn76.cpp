//Find diagonal sum
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,psum=0,ssum=0; 
    cout << "Enter the number of row colume:- ";
    cin >> n;
    int mat[n][n];
    //Assign value to matrix 
    cout <<"Enter element of matrix ";
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    //Display matrix 
    cout <<"MATRICS \n";
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<mat[i][j]<<"  ";
        }
        cout <<endl;
    }
    //Diagonal sum
    for (int i=0;i<n;i++){
            psum+=mat[i][i];
            ssum+=mat[i][n-1-i];
    }
    cout << "Sum of principal diagonal :- "<<psum;
    cout << "\nSum of secondary diagonal :- "<<ssum;
}