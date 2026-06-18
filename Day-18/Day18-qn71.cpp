//Binary search
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, search, mid;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements in sorted order: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Enter element to search: ";
    cin >> search;
    int start = 0;
    int end = n - 1;
    bool found = false;
    while (start <= end){
        mid = (start + end) / 2;
        if (arr[mid] == search){
            cout << "Element found at position " << mid + 1;
            found = true;
            break;
        }
        else if (search > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    if (found=0){
        cout << "Element not found";
    }
}