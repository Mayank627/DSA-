#include <iostream>
using namespace std;
int main() {
    int n,k,i,count = 0;
    cin>>n>>k;
    int arr[n];
    for(i=0;i<n;++i){
        cin>>arr[i];
    }
    for(i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            if(arr[i]+arr[j]==k){
                count++;
            }
        }
    }
    cout<<count;
    
	return 0;
}
