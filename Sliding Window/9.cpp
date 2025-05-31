#include<iostream>//leetcode 1004. Max Consecutive Ones III
#include<vector>
using namespace std;
int longestOnes(vector<int>& nums, int k) {
    int n=nums.size();
    int sw=0,sw1=0;

    int i=1;
    int d=0;
    for(int i=0;i<n;i++){ 
        if(nums[i]==0){
            d++;
            if(d>k) break;
            sw+=1;
        }
            else sw+=nums[i];
    }
    d=0;
cout<<"The sw is -> "<<sw<<endl;
    while(i<n-k+1){
        int m=0;
        int a=i+sw-1;
        int j=sw;
        while(a<n){
            if(nums[a]==1){
                sw++;
            }
            else if(nums[i]==0 and nums[a]==0) break;
            else if(nums[i]!=0 and nums[a]==0){
                i=i+sw-k+1;
                for(int q=i;q<n;q++){ 
                    if(nums[q]==0){
                        d++;
                        if(d>k) break;
                        sw1+=1;
                    }
                      else sw1+=nums[q];
                    }
                    cout<<"sw1 is -> "<<sw1<<endl; 
                    if(sw1<sw) break;
                    else sw=sw1; 
            }
        }
        i++;
        cout<<sw<<endl;
    }
    return sw;
}
int main(){
    int k=2;
    vector<int>nums={1,1,1,0,1,1,1,1,0};
    cout<<"Required ans is -> "<<longestOnes(nums,k);
}