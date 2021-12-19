#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    int i;
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    bool val = next_permutation(a,a+n);
    if(val==0){
        sort(a,a+n);
    }
    for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }
    return 0;
}