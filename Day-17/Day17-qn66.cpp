//Find the union of arrays
#include <bits/stdc++.h>
using namespace std;
vector<int> uArray(vector<int> a,
    vector<int> b){
    int n1=a.size();
    int n2=b.size();

    set<int> st;
    for (int i=0;i<n1;i++){
        st.insert(a[i]);
    }
    for (int i=0;i<n2;i++){
        st.insert(b[i]);
    }
    vector<int> unionArray;
    for (auto it:st){
        unionArray.push_back(it);
    }
    return unionArray;
}
int main(){
    vector<int> a={1,2,3,4};
    vector<int> b={3,4,5,6};
    vector<int> ans=uArray(a,b);

    for(int x:ans){
        cout<<x<<" ";
    }
}

