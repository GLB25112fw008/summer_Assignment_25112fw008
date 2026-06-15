//Move zeroes to end
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
    int j = 0;

    // Place non-zero elements at the beginning
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }

    // Fill remaining positions with zeros
    while (j < n) {
        arr[j] = 0;
        j++;
    }

    cout << "\nArray after moving zeros to end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}