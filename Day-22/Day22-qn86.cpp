//Count words in a sentence 
#include <bits/stdc++.h>
using namespace std;
int cntword(string &s){
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==' ') cnt++;
    }
    return cnt+1;
    
}
int main (){
    string s;
    cout << "Enter the sentence:- ";
    getline(cin,s);
    cout <<"Number of words in "<<s<<" is "<<cntword(s);
}