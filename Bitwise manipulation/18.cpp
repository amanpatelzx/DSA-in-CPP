#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int i=0,k=1,j=0,n=nums.size();
        while(k<n-1){
            j=k+1;
            i=k-1;
            while(i>=0 and j<=n-1){
                if((nums[k]+nums[i]+nums[j])==0){
                    vector<int> v={nums[i],nums[k],nums[j]};
                    ans.push_back(v);
                    j++;
                    i--;
                }
                else if((nums[k]+nums[i]+nums[j])<0) j++;
                else if((nums[k]+nums[i]+nums[j])>0) i--;
            }
                 k++;
        }
        sort(ans.begin(),ans.end());
        int n1=ans.size();
        vector<vector<int>> ans1(1)=ans[0];
        for(int i=0;i<n1-1;i++){
            if(ans[i]!=ans[i+1]) ans1.push_back(ans[i]);
        }
            return ans1;
    }
int main(){
    // vector<int> v={-1,0,1,2,-1,-4};
    vector<int> v={0,0,0,0};
    // vector<int> v={0,1,1};
    vector<vector<int>>ans=threeSum(v);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<3;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    }
