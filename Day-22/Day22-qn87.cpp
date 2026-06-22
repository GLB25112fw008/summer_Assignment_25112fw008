//Character frequency
#include <bits/stdc++.h>
using namespace std;
int freq(string &s){
    int hash[256]={0};
    for (int i=0;i<s.size();i++){
        hash[s[i]]++;
    }
    for (int i=0;i<s.size();i++){
        cout << s[i]<<  "-->"<<hash[s[i]]<<endl;
    }
}
int main (){
    string s;
    cout << "Enter the string:- ";
    cin >> s;
    freq(s);
}