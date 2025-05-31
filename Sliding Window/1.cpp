#include<iostream>//finding the maximum sum of subarray of size k
#include<vector>//by brute force method
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    vector<int>nums={7,1,2,5,8,4,9,3,6};
    int k=3;
    int n=nums.size();
    int sum=0;
    int ans=0;
    int idx=-1;
    for(int i=0;i<n-k;i++){
        for(int j=i;j<i+k;j++){
            sum+=nums[j];
        }
        if(sum>ans){
            ans=sum;
            idx=i;
        }
        sum=0;
    }
    cout<<ans<<" "<<idx;
}
