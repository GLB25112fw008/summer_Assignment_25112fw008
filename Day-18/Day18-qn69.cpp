//Bubble sort
#include <bits/stdc++.h>
using namespace std;
int bubblesort(int arr[],int n){
    for (int i=n-1;i>=0;i--){
        int dswap=0;
        for (int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                dswap=1;
            }
        }
        if (dswap==0){
            break;
        }
    }
}
int main (){
    int n;
    cout <<"Enter the number of terms:- ";
    cin>>n;
    int arr[n];
    cout <<"Enter elements of an array";
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    bubblesort(arr,n);
    for (int i=0;i<n;i++){
        cout <<arr[i]<<" ";
    }
}