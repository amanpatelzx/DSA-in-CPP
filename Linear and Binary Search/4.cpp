#include<iostream>//upperbound
#include<vector>
using namespace std;
int main(){
    int x,target;
    cout<<"Enter x and target -> ";
    cin>>x>>target;
    vector<int>nums(x);
    for(int i=1; i<=x; i++){
        cin>>nums[i];
    }
    int low=0;
    int high=nums.size()-1;
       while(low<=high){
        int mid=(low+high)/2;
    if(nums[mid]>target and nums[mid-1]<target){
        cout<<nums[mid];
        break;
    }
    else if(nums[mid]<target) low=mid;
    else high=mid-1;
 }
}
