//Convert lowercase to uppercase
#include <bits/stdc++.h>
using namespace std;
string convertcase(string &s){
    for (int i=0;i<s.size();i++){
        if (islower(s[i])){
            s[i]=toupper(s[i]);
        }
        else s[i]=tolower(s[i]);
    }
    return s;
}
int main (){
    string s;
    cout << "Enter the string:- ";
    cin >> s;
    cout <<convertcase(s);
}