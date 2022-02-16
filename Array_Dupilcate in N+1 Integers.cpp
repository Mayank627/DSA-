#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;++i){
        cin>>arr[i];
    }
    vector<int> nums;
    for (int i=0; i < num; i++) {
      nums.push_back(arr[i]);
   }
    int slow = nums[0];
    int fast = nums[0];
    
    do{
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while(slow!=fast);
    
    fast = nums[0];
    while(slow!=fast){
        slow = nums[slow];
        fast = nums[fast];
    }
    cout<<slow<<endl;
    return 0;
    
}