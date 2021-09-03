#include<iostream>
void rotate(int arr[],int n){
    int i;
    int last=arr[n-1];
    for(i=n-2;i>=0;--i){
        arr[i+1]=arr[i];
    }
    arr[0]=last;
}
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements: ";
    int arr[n];
    for(i=0;i<n;++i){
        cin>>arr[i];
    }
    rotate(arr,n);
    cout<<"The rotated array is: ";
    for(i=0;i<n;++i){
        cout<<" "<<arr[i];
    }
    return 0;
}