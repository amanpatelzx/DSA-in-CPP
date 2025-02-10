#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x,target;
    cout<<"Enter x and target -> ";
    cin>>x>>target;
    vector<int>nums(x);
    for(int i=0; i<x; i++){
        cin>>nums[i];
    }
    int low=0;
    int high=nums.size()-1;
       while(low<=high){
        int mid=(low+high)/2;//we can write mid=(low+high+low -low)/2=mid=low+(high-low)/2
    if(nums[mid]==target){//becosue of this this can never go outside range of integer
        cout<<mid;
        break;
    }
    else if(nums[mid]<target) low=mid+1;
    else high=mid-1;
 }
}
