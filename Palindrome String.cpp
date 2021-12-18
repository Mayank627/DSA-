#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char a[20];
	cout<<"Enter the string: ";
	cin>>a;
	int flag=0;
	int n=strlen(a);
	for(int i=0;i<n;++i){
	    if(a[i]!=a[n-1-i]){
	        flag=1;
	        break;
	    }
	}
	if(flag==1){
	    cout<<"Not a Palindrome";
	}
	else{
	    cout<<"Palindrome";
	}
	return 0;
}
