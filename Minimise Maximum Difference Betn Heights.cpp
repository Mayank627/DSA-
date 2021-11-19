#include <bits/stdc++.h>
using namespace std;
int FindDiff(int a[],int n,int k){
    sort(a,a+n);
    int ans = a[n-1]-a[0];
    int smallest = a[0]+k;
    int largest = a[n-1]-k;
    int mi,ma;
    
    for(int i=0;i<n-1;++i){
        mi = min(smallest,a[i+1]-k);
        ma = max(largest,a[i]+k);
        if(mi<0) continue;
        ans = min(ans,ma-mi);
    }
    cout<<"The minimum difference between the maximum heights is: "<<ans;
    return 0;
}
int main(){
    int n,k;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the value of k: ";
    cin>>k;
    cout<<"Enter the elements: ";
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    FindDiff(a,n,k);
}