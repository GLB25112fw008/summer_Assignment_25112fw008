//Find nth term of fibonacci series
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a=0,b=1,c,num,temp;
    cout << "Enter the nth term you want to find:";
    cin >> num;
    for (int i=0;i<num;i++){
        temp=a;
        c=a+b;
        a=b;
        b=c;
    }
    cout << "The"<<num<<"term of fibonacci series is "<<temp;
}