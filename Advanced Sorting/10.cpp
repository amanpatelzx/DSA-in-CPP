#include<iostream>//missing element 
#include<vector>//leatcode 448
#include<cmath>
using namespace std;
int main(){
    vector<int>nums={5,2,2,2,1};
    int n=nums.size();
        int i=0;
        while(i<n){
            int c=nums[i]-1;
            if(nums[c]==nums[i]) i++;
            else swap(nums[i],nums[c]);
        }
        vector<int>v;
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1) v.push_back(i+1);
        }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
} 