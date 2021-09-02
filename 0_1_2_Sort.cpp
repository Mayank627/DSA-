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
    int a=0,b=0,c=0;
    for(i=0;i<n;++i){
        if(arr[i]==0)
            a=a+1;
        else if(arr[i]==1)
            b=b+1;
        else
            c=c+1;
    }
    
    for(i=0;i<a;++i)
    arr[i]=0;
    
    for(i=a;i<a+b;++i)
    arr[i]=1;
    
    while(c--)
    arr[i++]=2;
    
    for(i=0;i<n;++i)
    cout<<" "<<arr[i];
    return 0;
}