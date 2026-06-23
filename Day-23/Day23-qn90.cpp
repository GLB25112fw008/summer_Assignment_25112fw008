//Find first repeating character
#include <bits/stdc++.h>
using namespace std;
char nonrepeating(string &s){
    int hash[256]={0};
    for (int i=0;i<s.size();i++){
        hash[s[i]]++;
    }
    for (int i=0;i<s.size();i++){
        if (hash[s[i]]>=2)  {
            return s[i]; 
            break; 
        }
    }
    cout<< "not found";
    return 0;

}
int main(){
    string s;
    cout << "Enter the string:- ";
    cin >> s;
    cout << nonrepeating(s) <<" is the first repeating character in "<<s;
}