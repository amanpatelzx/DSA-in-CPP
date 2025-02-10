#include<iostream>//
#include<vector>
using namespace std;//smallest missing no.
int main(){
    int x;
    cout<<"Enter x and target -> ";
    cin>>x;
    vector<int>nums(x);
    for(int i=0; i<x; i++){
        cin>>nums[i];
    }
    int low=0;
    int high=nums.size()-1;
       while(low<high){
        int mid=low+(high-low)/2;
        int target=nums[mid];
        int l=nums[0]+mid;
        if(target==l) low=mid+1;
        else if(target>l) high=mid;
 }
 cout<<"Required result is -> "<<nums[low-1]+1;
}
