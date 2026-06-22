//Remove spaces from string 
#include <bits/stdc++.h>
using namespace std;
string removeSpace(string &s){
    string ans="";
    for(int i=0;i<s.size();i++){
        if(s[i]!=' ') {
            ans+=s[i];
        }
    }
    return ans;
}
int main (){
    string s;
    cout << "Enter the sentence:- ";
    getline(cin,s);
    cout <<removeSpace(s);
}