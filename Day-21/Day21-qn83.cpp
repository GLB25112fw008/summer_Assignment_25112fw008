//Count vowels and consonants
#include <bits/stdc++.h>
using namespace std;
void countvowel(string &s){
    int vol=0,cons=0;
    for (int i=0;i<s.size();i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            vol++;
        }
        else cons++;
    }
    cout <<"The number of vowels and consonants in "<<s<<" is "<<vol<<" , "<<cons;
}
int main (){
    string s;
    cout << "Enter the string:- ";
    cin >> s;
    countvowel(s);
}