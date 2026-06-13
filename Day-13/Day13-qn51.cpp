//largest and smallest element
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cout << "Enter the numbers of terms ";
    cin >> n;
    int arr[n];
    //Assign value to an array
    cout << "Enter the elements of an array ";
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    //Display array
    cout << " ARRAY :- ";
     for (int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
    int lar=arr[0],sml=arr[0];
    //find largest and smallest element
    for (int i=0;i<n;i++){
        if (arr[i]>lar) lar=arr[i];
        if (arr[i]<sml) sml=arr[i];
    }
    //Display largest and smallest element
    cout << "\n Largest element of an array :- "<<lar;
    cout << "\n Smallest element of an array :- "<<sml;
}