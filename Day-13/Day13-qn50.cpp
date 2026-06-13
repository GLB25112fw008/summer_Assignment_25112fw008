// sum and average of an array
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,sum=0,avg=0;
    cout << "Enter the numbers of terms ";
    cin >> n;
    int arr[n];
    //assign value to array
    cout << "Enter the elements of an array ";
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    //Display array
    cout << " Array :- ";
    for (int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
    //sum and average of array 
    cout << " \n Sum and average of an array :- ";
    for (int i=0;i<n;i++){
        sum+=arr[i];
    }
    avg=sum/n;
    cout << sum<<" and "<<avg;
}