//Reverse an array
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cout << "Enter the numbers of terms ";
    cin >> n;
    int arr[n];
    //Assign value to an array
    cout << "Enter the elements of an array ";
    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }
    //Display array
    cout << " Array :- ";
    for (int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
    // Reverse an array
    cout <<"\nReverse of given array is :- ";
    for (int i=0;i<n/2;i++){
        swap(arr[i],arr[n-i-1]);
    }
    for (int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
}