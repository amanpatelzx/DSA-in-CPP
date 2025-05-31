#include<iostream>
#include<vector>
using namespace std;
int minSubArrayLen(int target, vector<int>& nums) {
    int n=nums.size();
    int sum=0;
    int idx=0;
    int minidx=0,maxidx=0;
    for(int i=0;i<n;i++){
        if(sum>=target){
            idx=i;
            break;
        } 
        else sum+=nums[i];
    }
    int i=1,j=idx;
    while(j<n){
        minidx=i;
        maxidx=j;
        int temp=sum+nums[j]-nums[i-1];
        int idxnew=i;
        if((temp>sum or temp>sum) and temp>=target){
           for(int k=idxnew;k<j;k++){
            temp=temp-nums[k];
            if(temp<target) break;
            else if(temp>target){
                sum=temp;
                i++;
            } 
            else {
                minidx=k;
                break;
            } 
           }
        }

    }
    return maxidx-minidx;
}
int main(){
    int target=7;
    vector<int>nums={2,3,1,2,4,3};
    cout<<minSubArrayLen(target,nums);
}