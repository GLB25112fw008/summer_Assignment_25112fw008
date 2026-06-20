//Check symmetric matrix
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,sym=1; 
    cout << "Enter the number of row,colume:- ";
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
    cout <<"MATRIX \n";
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<mat[i][j]<<"  ";
        }
        cout <<endl;
    }
    //check Symmetric of matrix
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if(mat[i][j]!=mat[j][i]){
                sym=0;
                break;
            }
        }
    }
    if (sym==1) cout <<"Matrix is symmetric";
    else cout <<"Matrix is not symmetric";
}