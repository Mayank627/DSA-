#include <bits/stdc++.h>
using namespace std;
int main() {
    int m,n,o;
    cin>>m>>n>>o;
    int i,j,k;
    int a[m],b[n],c[o];
    for(i=0;i<m;++i){
        cin>>a[i];
    }
    for(j=0;j<n;++j){
        cin>>b[j];
    }
    for(k=0;k<o;++k){
        cin>>c[k];
    }
    i=0,j=0,k=0;
    while(i<m && j<n && k<o){
        if(a[i]==b[j] && b[j]==c[k]){
            cout<<a[i]<<" "; 
            i++;
            j++;
            k++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<c[k]){
            j++;
        }
        else{
            k++;
        }
    }
    
	return 0;
}
