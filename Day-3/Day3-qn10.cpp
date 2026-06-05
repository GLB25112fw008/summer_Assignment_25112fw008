//print prime number in a range
#include<bits/stdc++.h>
using namespace std;
int main (){
    int num,n1,n2,prime=0;
    cout<< "enter the range of numbers:(from _to _)";
    cin>> n1 >> n2;
    for (int i=n1;i<=n2;i++){
        prime=0;
        for (int j=2;j<=i/2;j++){
            if (i%j==0){
                prime=1;
                break;
            }
        }
        if (prime==0 && i>1){
            cout<< i << " ";
        }
    }

}