#include<iostream>//leetcode 2389
#include<vector>//
#include<algorithm>
#include<climits>
using namespace std;
vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
    int n=nums.size();
    int m=queries.size();
    sort(nums.begin(),nums.end());
    vector<int>pri(n);
    vector<int>ans(m,0);
    pri[0]=nums[0];
    for(int i=1;i<n;i++){
        pri[i]=pri[i-1]+nums[i];
    }
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(pri[j]>queries[i]){
            ans[i]=j;
            break;
        }
        else if(j==n-1) ans[i]=j+1;
    }
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