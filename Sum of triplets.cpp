#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            for(int l=j+1;l<n;++l){
                if(arr[i]+arr[j]+arr[l]==k){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[l]<<endl;
                }
            }
        }
    }
	return 0;
}
