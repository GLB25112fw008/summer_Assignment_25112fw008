//Find common elements
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1, n2;
    cout << "Enter size of array1 and array2: ";
    cin >> n1>>n2;
    int arr1[n1],arr2[n2];
    cout << "Enter elements of first array: ";
    for(int i = 0; i < n1; i++){
        cin >> arr1[i];
    }
    cout << "Enter elements of second array: ";
    for(int i = 0; i < n2; i++){
        cin >> arr2[i];
    }
    cout << "Common elements are: ";
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            if(arr1[i] == arr2[j]){
                cout << arr1[i] << " ";
                break;
            }
        }
    }
}