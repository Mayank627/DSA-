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
    int min,max;
    min=max=a[0];
    for(i=0;i<n;++i)
    {
        if(min>a[i]){
            min=a[i];
        }
        if(max<a[i]){
            max=a[i];
        }
    }
    cout<<"The max is: "<<max<<endl;
    cout<<"The min is: "<<min;
    
    return 0;
}
