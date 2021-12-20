#include <bits/stdc++.h>
using namespace std;

int main() {
    string str1;
    cin>>str1;
    string str2;
    cin>>str2;
    string result;
    cin>>result;
    int l=str1.length();
    int m=str2.length();
    int n=result.length();
    
    if((l+m)!=n){
        cout<<"Unequal size, not a shuffle"<<endl;
    }
    else{
        int flag=0;
        int i=0,j=0,k=0;
        while(k<n){
            if((i<l) && (str1[i]==result[k])) i++;
            else if((j<m) and (str2[j]==result[k])) j++;
            else{
                flag=1;
                break;
            }
        k++;
    }
    if(i<l || j<m ) cout<<"Not a shuffle"<<endl;
    else cout<<"Shuffle"<<endl;
    }
    
    return 0;
}
