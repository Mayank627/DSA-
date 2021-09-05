#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the size of the first array: ";
    cin>>n;
    cout<<"Enter the size of the second array: ";
    cin>>m;
    int a[n],b[m],i;
    set<int> s;
    cout<<"Enter the elements of the first array: ";
    for(i=0;i<n;++i){
        cin>>a[i];
        s.insert(a[i]);
    }
    cout<<"Enter the elements of the second array: ";
    for(i=0;i<m;++i){
        cin>>b[i];
        s.insert(b[i]);
    }
    cout<<"The union of two arrays is: ";
    cout<<s.size()<<endl;
    
}