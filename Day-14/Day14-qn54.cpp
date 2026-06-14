//Frequency of an element
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
    //mapping 
    map<int,int>mpp;
    for (int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    cout << "Frequency of an elements";
    for(auto it:mpp){
        cout << it.first<<"-->"<<it.second<<endl;
    }
}