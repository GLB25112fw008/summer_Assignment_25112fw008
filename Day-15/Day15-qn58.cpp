//Rotate array left
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
    int first = arr[0];
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = first;
    cout <<"\nArray after left rotation:";
    for (int i = 0; i < n; i++) {
        cout << arr[i]<<" ";
    }

    return 0;
}
