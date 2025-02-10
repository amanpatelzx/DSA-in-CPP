#include<iostream>
#include<vector>
using namespace std;
int main(){
    // int x,target;
    // cout<<"Enter x and target -> ";
    // cin>>x>>target;
    vector<int>nums={1,3,3,3,5,6,7,8};
    int target=7;
    // for(int i=1; i<=x; i++){
    //     cin>>nums[i];
    // }
    int low=0;
    int high=nums.size()-1;
       while(low<=high){
        int mid=(low+high)/2;
    if(nums[mid]==target){
        if(nums[mid-1]==target) high=mid-1;
         else {
        cout<<mid;
        break;
         }
    }
    else if(nums[mid]<target) low=mid+1;
    else if(nums[mid]>target) high=mid-1;
}
}
