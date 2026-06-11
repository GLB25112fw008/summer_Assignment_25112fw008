//function to find factorial
#include <bits/stdc++.h>
using namespace std;
int ffact(int n,int fact=1){
    for (int i=n;i>0;i--){
        fact=fact*i;
    }
    return fact;
}

int main (){
    int n;
    cout << "Enter the number  ";
    cin >> n;
    cout << "factorial of "<<n<<" is "<<ffact(n);
}