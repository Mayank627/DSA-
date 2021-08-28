/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements: ";
    int a[n],i;
    for(i=0;i<n;++i)
    cin>>a[i];
    int start=0,end=n-1;
    while(start<end)
    {
        swap(a[start],a[end]);
        start++;
        end--;
    }
    cout<<"The reversed array is: ";
    for(i=0;i<n;++i)
    cout<<a[i]<<" ";
    return 0;
}
