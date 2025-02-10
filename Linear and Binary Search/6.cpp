#include<iostream>//this is final answer of the question
#include<vector>//if {1,2,3,3,3,3,3,4,5} return {2,6}
#include<algorithm>
using namespace std;
vector<int> searchRange(vector<int>& nums, int target) {
        int idx=-1;
        int low=0;
        int high=nums.size()-1;
        vector<int>ans;
        vector<int>ans2={-1,-1};
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                    idx=mid;
                    break;
                }
            else if(nums[mid]<target) low=mid+1;
            else if(nums[mid]>target) high=mid-1;
        }
        if(idx==-1) return ans2;
        // cout<<idx<<endl;
        int j=idx;
        while(j>=0 and nums[j]==target){
            // if(nums[i]==nums[i-1]) 
            j--;
            idx=j+1;
            // cout<<i<<endl;
        }
        cout<<idx<<endl;
        int i=idx;
            ans.push_back(idx);
        while(i<nums.size() and nums[i]==target){
            // cout<<i<<endl;
            idx=i;
            i++;
        }
            ans.push_back(idx);
    //     ans.pop_back();
    //      for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }
        return ans;
        // else return ans2;
}

int main(){
    int x,target;
    cout<<"Enter x and target -> ";
    cin>>x>>target;
    vector<int>nums(x);
    for(int i=0; i<x; i++){
        cin>>nums[i];
    }
    vector<int>ans=searchRange(nums,target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    }