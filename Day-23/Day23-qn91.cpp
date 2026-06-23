//Check anagram strings
#include <bits/stdc++.h>
using namespace std;
int anagramstring(string &s1,string &s2){
    int cnt=0;
    if (s1.size()!=s2.size()) return cnt;
    int hash1[256]={0};
    int hash2[256]={0};
    for (int i=0;i<s1.size();i++){
        hash1[s1[i]]++;
        hash2[s2[i]]++;
    }
    for (int i=0;i<s1.size();i++){
        if (hash1[s1[i]]==hash2[s2[i]]){
            cnt++;
        }
    }
    return cnt;

}
int main(){
    string s1,s2;
    cout << "Enter the strings:- ";
    cin >> s1>>s2;
    int ans=anagramstring(s1,s2);
    if (ans!=0) cout <<s1 <<" and "<<s2<<" is anagram string";
    else  cout <<s1 <<" and "<<s2<<" is not anagram string";
}