#include<iostream>//prifix sum.
#include<vector>//
#include<cmath>
using namespace std;
int main(){
    vector<int>nums={5,2,2,2,1};
    for(int i=1;i<nums.size();i++){
        nums[i]+=nums[i-1];
    }
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
} 