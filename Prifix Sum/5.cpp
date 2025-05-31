#include<iostream>//prifix sum
#include<vector>//
#include<cmath>
using namespace std;
int main(){
    vector<int>nums={-1,1,0,-3,3};
    int n=nums.size();
    vector<int>pri=nums;
    vector<int>suf=nums;
    vector<int>ans(n);
    int p=pri[0];
    for(int i=0;i<n;i++){
            if(i==0) pri[i]=1;
            else {
                pri[i]=p;
                p*=nums[i];
        }
    }
    p=suf[n-1];
    for(int i=n-1;i>=0;i--){
            if(i==n-1) suf[i]=1;
            else {
                suf[i]=p;
                p*=nums[i];
    }
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
   