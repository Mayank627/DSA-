#include<iostream>
using namespace std;

class twoStacks{
    int *arr;
    int size;
    int top1,top2;
    
    public:
        twoStacks(int n){
            size = n;
            top1 = -1;
            top2 = size;
        }
        void push1(int x){
            if(top1<top2-1){
                top1++;
                arr[top1]= x;
            }
            else{
                cout<<"Stack Overflow"<<endl;
            }
        }
        void push2(int x){
            if(top2>top1+1){
                top2--;
                arr[top2]=x;
            }
            else{
                cout<<"Stack Overflow"<<endl;
            }
        }
        int pop1(){
            if(top1>0){
                int x = arr[top1];
                top1--;
                return x;
            }
            else{
                cout<<"Stack Undeflow"<<endl;
            }
        }
        int pop2(){
            if(top2<size){
                int x = arr[top2];
                top2++;
                return x;
            }
            else{
                cout<<"Stack Underflow"<<endl;
            }
        }
};

int main(){
    twoStacks ts(5);
    ts.push1(5);
    ts.push2(15);
    ts.push2(10);
    ts.push1(8);
    ts.push2(25);
    cout<<"The element popped from Stack1 is: "<<ts.pop1()<<endl;
    ts.push2(30);
    cout<<"The element popped from stack2 is: "<<ts.pop2()<<endl;
    ts.push2(5);
    return 0;
}
        
        
        
        
