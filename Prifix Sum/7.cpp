#include<iostream>//prifix multiply;
#include<vector>//
#include<cmath>
using namespace std;
int main(){
    vector<int>nums={1,2,3,4};
    int n=nums.size();
    vector<int>pri=nums;
    int p=pri[0];
    for(int i=0;i<n;i++){
            if(i==0) pri[i]=1;
            else {
                pri[i]=p;
                p*=nums[i];
        }
    }
    p=nums[n-1];
    for(int i=n-1-1;i>=0;i--){
        pri[i]=pri[i]*p;
        p*=nums[i];
}
    for(int i=0;i<pri.size();i++){
        cout<<pri[i]<<" ";
} 
}