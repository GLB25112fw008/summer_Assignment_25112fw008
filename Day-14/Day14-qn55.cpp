//Find second largest element of an array 
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
    int largest=arr[0], slargest=arr[0];
    //find largest element
    for (int i=1;i<n;i++){
        if (arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i]>slargest && arr[i]<largest){
            slargest =arr[i];
        }
    }
    cout << "Second largest element of an array is "<<slargest;
}