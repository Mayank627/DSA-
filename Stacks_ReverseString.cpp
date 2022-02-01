#include <bits/stdc++.h>
#include <string.h>
#include <stack>
using namespace std;

void reverse(char *p){
    stack<char> S;
    for(int i=0;i<strlen(p);++i){
        S.push(p[i]);
    }
    
    for(int i=0;i<strlen(p);++i){
        p[i]=S.top();
        S.pop();
    }
}

int main(){
    char string[100];
    cout<<"Enter the string: "<<endl;
    cin>>string;
    reverse(string);
    cout<<"The reversed string is: "<<endl;
    for(int i=0;i<strlen(string);++i){
        cout<<string[i];
    }
    return 0;
}