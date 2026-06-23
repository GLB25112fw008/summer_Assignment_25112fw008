//Find maximum occurring character
#include <bits/stdc++.h>
using namespace std;
char maxOccurring(string &s){
    int hash[256]={0};
    for (int i=0;i<s.size();i++){
        hash[s[i]]++;
    }
    int maxi=0;
    char ans;
    for (int i=0;i<s.size();i++){
        if (hash[s[i]]>maxi)  { 
            maxi=hash[s[i]];
            ans=s[i];
        }
    }
    return ans;

}
int main(){
    string s;
    cout << "Enter the string:- ";
    cin >> s;
    cout << maxOccurring(s) <<" is the maxiumum occurring character in "<<s;
}