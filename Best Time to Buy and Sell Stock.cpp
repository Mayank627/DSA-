#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    
    int price = INT_MAX;
    int profit = 0;
    
    for(int i=0;i<n;++i){
    
    if(a[i]<price){
        price = a[i];
    }
    
    else if(a[i]-price>profit){
        profit = a[i]-price;
    }
    }
    
    cout<<profit<<endl;
    
}