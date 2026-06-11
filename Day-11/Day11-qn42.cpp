//function to find maximum
#include <bits/stdc++.h>
using namespace std;
int fmax(int n1,int n2){
    return max(n1,n2);
}
int main (){
    int n1,n2;
    cout << "Enter the two numbers ";
    cin >> n1>>n2;
    cout << "maximum number is "<<fmax(n1,n2);
}