#include<iostream>//prifix sum
#include<vector>//
#include<cmath>
using namespace std;
int main(){
    //vector<int>nums={-1,1,0,-3,3};
    vector<int>nums={1,2,3,4,5};
    int n=nums.size();
    vector<int>pri=nums;
    vector<int>suf=nums;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        if(i<=1){
            if(i==0) pri[i]=1;
            else pri[i]=nums[0];
        }
        else pri[i]=nums[i-1]*pri[i-1];
    }
    for(int i=n-1;i>=0;i--){
        if(i>=n-1-1){
            if(i==n-1) suf[i]=1;
            else suf[i]=nums[n-1];
        }
        else suf[i]=nums[i+1]*suf[i+1];
    }
    for(int i=0;i<n;i++){
        ans[i]=pri[i]*suf[i];
    }
    for(int i=0;i<ans.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<pri[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<suf[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
} 
   