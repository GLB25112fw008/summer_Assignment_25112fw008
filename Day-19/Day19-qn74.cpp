//Subtract matrices
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    //number of row and colume for both matrix should be same  
    cout << "Enter the number of row and colume:- ";
    cin >> n>>m;
    int mat1[n][m],mat2[n][m],minus[n][m];
    //Assign value to matrix 1
    cout <<"Enter element of matrix 1";
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>mat1[i][j];
        }
    }
    //Assign value to matrix 2
    cout <<"Enter element of matrix 2";
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>mat2[i][j];
        }
    }
    //Display matrix 1
    cout <<"MATRICS 1\n";
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<mat1[i][j]<<"  ";
        }
        cout <<endl;
    }
    //Display matrix 2
    cout <<"MATRICS 2\n";
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<mat2[i][j]<<"  ";
        }
        cout <<endl;
    }
    //Subtraction of matrices
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            minus[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
    cout <<"Subtraction of Matrices \n";
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout << minus[i][j] <<"  ";
        }
        cout <<endl;
    }
}