#include<iostream>//prifix sum
#include<vector>//partision wala question.
#include<cmath>
using namespace std;
int main(){
    vector<int>nums={1,2,3,4,5,6,7,8};
    for(int i=1;i<nums.size();i++){
        nums[i]+=nums[i-1];
    }
    //lets x be the index where we have to partision the array
    //nums[x]=nums[nums.size()-1]-nums[x]
    //nums[x]=nums[nums.size()-1]/2; 
    bool flag=false;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==nums[nums.size()-1]/2){
            // cout<<i<<" ";
            flag=true;
            break;
        }
    }
    if(flag==false) cout<<"No partision not possible";
    else cout<<"Partision is possible";
} 