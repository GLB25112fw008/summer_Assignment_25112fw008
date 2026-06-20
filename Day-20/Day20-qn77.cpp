//Multipy matrices
//Add matrices
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b;  
    cout << "Enter the number of row and column for matrix 1 :- ";
    cin >> n>>m;
    cout << "Enter the number of row and column for matrix 2 :- ";
    cin >> a>>b;
    int mat1[n][m],mat2[a][b],mat[n][b];
    if (m!=a) cout << "Mutiplication is not possible";
    else{
    //Assign value to matrix 1
    cout <<"Enter element of matrix 1";
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>mat1[i][j];
        }
    }
    //Assign value to matrix 2
    cout <<"Enter element of matrix 2";
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            cin>>mat2[i][j];
        }
    }
    //Display matrix 1
    cout <<"MATRIX 1\n";
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<mat1[i][j]<<"  ";
        }
        cout <<endl;
    }
    //Display matrix 2
    cout <<"MATRIX 2\n";
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            cout<<mat2[i][j]<<"  ";
        }
        cout <<endl;
    }
    //multiplication of matrices
    for (int i=0;i<n;i++){
        for (int j=0;j<b;j++){
            mat[i][j] = 0;
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<b;j++){
            for (int k=0;k<a;k++){
                mat[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }   
    }
    //Display mutiply of matrices
    cout <<"Multipication of matrices are:- \n";
    for (int i=0;i<n;i++){
        for (int j=0;j<b;j++){
            cout << mat[i][j]<<" " ;
        }
        cout << endl;
    }

}
}
