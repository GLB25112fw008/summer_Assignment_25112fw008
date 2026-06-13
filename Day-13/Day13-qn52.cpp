// count even and odd element 
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,even=0,odd=0;
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
    //find number of even and odd element
    for (int i=0;i<n;i++){
        if (arr[i]%2==0) even+=1;
        else odd+=1;
    }
    //Display number of even and odd element
    cout << "\n Number of even element of an array :- "<<even;
    cout << "\n Number of odd element of an array :- "<<odd;
}