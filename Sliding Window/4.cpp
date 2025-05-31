#include<iostream>//finding the maximum sum of subarray of size k
#include<vector>//no we will use sliding window
#include<algorithm>//optimise code
#include<climits>
using namespace std;
int main(){
    vector<int>nums={7,1,2,5,8,4,9,3,6};
    int k=4;
    int n=nums.size();
    int sum=0;
    int ans=0;
    int idx=-1;
    for(int i=0;i<k;i++){
        sum+=nums[i];
    }
    int j=k, i=1;
    while(j<n){
       sum=sum+nums[j]-nums[i-1];
         j++;
         i++;
        if(sum>ans){
            ans=sum;
            idx=i;
        }
    }
    cout<<ans<<" "<<idx;
}