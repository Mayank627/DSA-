#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements: ";
    int i, arr[n];
    for(i=0;i<n;++i){
      cin>>arr[i];}
    sort(arr,arr+n);
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    cout<<"The kth max is: "<<arr[k-1]<<endl;
    cout<<"The kth min is: "<<arr[n-k];
    return 0;
}