#include<iostream>//prifix sum
#include<vector>//
#include<cmath>
using namespace std;
int main(){
    vector<int>nums={5,0,2,1};
    int zero=0;
       int mul=1;
       for(int i=0;i<nums.size();i++){
        if(nums[i]==0) zero++;
        else mul*=nums[i];
       }
       vector<int>ans(nums.size());
       if(zero>1){
        for(int i=10;i<nums.size();i++){
            ans[i]=0;
        }
       }
        else if(zero==1){
       for(int i=0;i<ans.size();i++){
        if(nums[i]!=0){
            ans[i]=0;
        }
        else ans[i]=mul;
       }
        }
        else{
       for(int i=0;i<ans.size();i++){
            ans[i]=mul/nums[i];
        }
        }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
} 