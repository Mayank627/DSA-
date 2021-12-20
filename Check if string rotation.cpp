#include <bits/stdc++.h>
using namespace std;

int main() {
    string str1;
    cin>>str1;
    string str2;
    cin>>str2;
    string temp= str1+str1;
    int p=temp.find(str2);
    if(str1.length()!=str2.length()){
        cout<<"Isn't a rotation"<<endl;
    }
    else if(p!= string::npos){
        cout<<"Is a rotation"<<endl;
    }
    else{
        cout<<"Isn't a rotation"<<endl;
    }
    
    
    return 0;
}