//Find row-wise sum.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,sum=0; 
    cout << "Enter the number of row and colume:- ";
    cin >> n>>m;
    int mat[n][m];
    //Assign value to matrix 
    cout <<"Enter element of matrix ";
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    //Display matrix 
    cout <<"MATRIX \n";
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<mat[i][j]<<"  ";
        }
        cout <<endl;
    }
    //Row-wise sum of matrix
    cout <<"Row-wise sum of matrix is:- ";
    for (int i=0;i<n;i++){
        sum=0;
        for (int j=0;j<m;j++){
            sum+=mat[i][j];
        }
        cout << sum <<" " ;
    }
}
