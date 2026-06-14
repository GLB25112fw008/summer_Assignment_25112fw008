//Linear search 
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,num,result=0;
    cout << "Enter the numbers of terms ";
    cin >> n;
    int arr[n];
    //Assign value to an array
    cout << "Enter the elements of an array ";
    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }
    cout << " Enter the element you want to search  ";
    cin >> num;
    //search element in an array
    for (int i=0;i<n;i++){
        if (arr[i]==num){
             cout << "Element is found at index "<<i;
             result=0;
             break;
        }
    }
}