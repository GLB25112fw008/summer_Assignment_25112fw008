//Check palindrome string 
#include <bits/stdc++.h>
using namespace std;
int palindrome(string &s){
    int cnt=0;
    for (int i=0;i<(s.size())/2;i++){
        if (s[i]==s[(s.size())-i-1]){
            cnt=1;
        }
        else {
            cout <<"given string is not a palindrome";
            break;
        }
    }
    if (cnt==1) cout <<"given string is a palindrome";
}
int main (){
    string s;
    cout << "Enter the string:- ";
    cin >> s;
    palindrome(s);
}