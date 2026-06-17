//Merge an arrays 
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n1,n2;
    cout << "Enter the size of array1 and array2 ";
    cin >> n1>>n2;
    int a[n1],b[n2],mergearray[n1+n2];
    cout <<"Enter the element of array1:- ";
    for (int i=0;i<n1;i++){
         cin >> a[i];
    }
    cout <<"Enter the element of array1:- ";
    for (int i=0;i<n2;i++){
         cin >> b[i];
    }
    //merging two arrays into third one 
    for (int i=0;i<n1;i++){
        mergearray[i]=a[i];
    }
    for (int i=0;i<n2;i++){
        mergearray[n1+i]=b[i];
    }
    //Display merge array
    cout << "Merge Array:- ";
    for (int i=0;i<(n1+n2);i++){
        cout << mergearray[i]<< " ";
    }
}