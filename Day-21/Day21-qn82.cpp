//Reverse a string
#include <bits/stdc++.h>
using namespace std;
string reversestr(string &s){
    for (int i=0;i<s.size()/2;i++){
        swap(s[i],s[s.size()-i-1]);
    }
    return s;
}
int main (){
    string s;
    cout << "Enter the string:- ";
    cin >> s;
    cout <<reversestr(s);
}