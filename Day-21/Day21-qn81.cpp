//Find length of string without using strlen()
#include <bits/stdc++.h>
using namespace std;
int stringlength(string &s){
    int len=0;
    for (int i=0;i<s.size();i++){
        len++;
    }
    return len;
}
int main (){
    string s;
    cout << "Enter the string:- ";
    cin >> s;
    cout <<"The length of "<<s<<" is "<<stringlength(s);
}