#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char a[] = {'a','b','d','e'}; char b[20];
	int flag=0,i;
	int n=strlen(a);
	for(i=0;i<n;++i){
	    b[i] = a[n-1-i];
	}
	cout<<"Reverse is: {";
	for(i=0;i<n;++i){
	    if(i == n-1)
	        cout<<b[i];
	       else
	        cout << b[i] << ",";
	}
	cout << "}";
	return 0;
}
