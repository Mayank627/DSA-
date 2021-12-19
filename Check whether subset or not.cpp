#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    for(int j=0;j<m;++j){
        cin>>b[j];
    }
    unordered_set<int> s;
    for(int i=0;i<n;++i){
        s.insert(a[i]);
    }
    int p=s.size();
    for(int j=0;j<m;++j){
        s.insert(b[j]);
    }
    if(s.size()==p){
        cout<<"arr2 is the subset of arr1";
    }
    else{
        cout<<"arr2 isn't the subset of arr1";
    }
    return 0;
}
