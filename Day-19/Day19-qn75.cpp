//Transpose matrix
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m; 
    cout << "Enter the number of row and colume:- ";
    cin >> n>> m;
    int mat[n][m];
    //Assign value to matrix 
    cout <<"Enter element of matrix ";
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    //Display matrix 
    cout <<"MATRICS \n";
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<mat[i][j]<<"  ";
        }
        cout <<endl;
    }
    //Transpose of matrix
    cout << "Transpose of matrix \n ";
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout <<mat[j][i] <<"  ";
        }
        cout<<endl;
    }
    return 0;
}