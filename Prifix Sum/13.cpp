#include<iostream>//leetcode 2389
#include<vector>//this one is better solution 
#include<algorithm>//by using binary search
#include<climits>
using namespace std;
vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
    int n=nums.size();
    int m=queries.size();
    sort(nums.begin(),nums.end());
    vector<int>ans(m,0);
    for(int i=1;i<n;i++){
        nums[i]+=nums[i-1];
    }
    for(int i=0;i<m;i++){
        int high=n-1,low=0,idx=0;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]>queries[i]) high=mid-1;
        else {
            idx=mid+1;
            low=mid+1;
        }
    }
        ans[i]=idx;
    }
    return ans;
}
int main(){
    vector<int>nums={4,5,2,1};
    vector<int>queries={3,10,21};
    vector<int>ans=answerQueries(nums,queries);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
} 