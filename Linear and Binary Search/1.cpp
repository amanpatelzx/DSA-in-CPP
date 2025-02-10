#include<iostream>
#include<vector>
using namespace std;
int helper(vector<int>& nums, int target,int low,int high ){
    // if(low==high and nums[low]!=target) return -1;
    int mid=(low+high)/2;
    if(nums[mid]==target) return mid;
    else if(nums[mid]<target) low=mid+1;
    else high=mid-1;
    return helper(nums,target,low,high);
}
int main(){
    int x,y;
    cout<<"Enter x and y -> ";
    cin>>x>>y;
    vector<int>nums(x);
    for(int i=1; i<=x; i++){
        cin>>nums[i];
    }
       int low=0;
        int high=nums.size()-1;
       cout<<helper(nums,y,low,high);
}
