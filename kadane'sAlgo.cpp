#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    long long int a[n],i;
    cout<<"Enter the elements of the array: ";
    for(i=0;i<n;++i){
        cin>>a[i];
    }
    long long int cur_sum=a[0],max_sum=a[0];
    for(i=1;i<n;++i){
        cur_sum=max(cur_sum+a[i],a[i]);
        max_sum=max(cur_sum,max_sum);
    }
    cout<<"The largest sum contiguous sub-array is: "<<max_sum<<endl;
    return 0;
}