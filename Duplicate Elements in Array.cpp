#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int i,a[n];
    cout<<"Enter the elements of the array: ";
    for(i=0;i<n;++i){
        cin>>a[i];
    }
    cout<<"Duplicate elements in the array: ";
    for(i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            if(a[i]==a[j]){
                cout<<" "<<a[i];}
        }
    }
}