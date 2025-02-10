#include<iostream>
#include<vector>
#include<algorithm>//lwttcode 658
using namespace std;
vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>ans;
        int n=arr.size();
        if(x<arr[0]){
            for(int i=0;i<k;i++){
                ans.push_back(arr[i]);
            }
            return ans;
        }
        else if(x>arr[n-1]){
            for(int i=n-k;i<n;i++){
                ans.push_back(arr[i]);
            }
            return ans;
        }
        int lo=0;
        int hi=n-1;
        int idx=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(arr[mid]==x){
                idx=mid;
                break;
            }
            else if(arr[mid]<x) lo=mid+1;
            else if(arr[mid]>x) hi=mid-1;
        }
        if(idx!=-1){
            ans.push_back(x);
            int low=idx-1;
            int high=idx+1;
            while(ans.size()<k){
            if(low<0 and high<n-1){
                ans.push_back(arr[high]);
                high++;
            } 
            else if(high>n-1 and low>=0){
                ans.push_back(arr[low]);
                low--;
            } 
            else if((arr[high]-x)==(x-arr[low])){
                ans.push_back(arr[low]);
                low--;
            } 
            else if((arr[high]-x)<(x-arr[low])){
                ans.push_back(arr[high]);
                high++;
            } 
            else if((arr[high]-x)>(x-arr[low])){
                ans.push_back(arr[low]);
                low--;
            } 
            if(ans.size()==k) return ans;
            }
        }
        if(idx==-1){
            int low=hi;
            int high=lo;
             while(ans.size()<k){
            if(low<0 and high<n-1){
                ans.push_back(arr[high]);
                high++;
            } 
            else if(high>n-1 and low>0){
                ans.push_back(arr[low]);
                low--;
            } 
            else if((arr[high]-x)==(x-arr[low])){
                ans.push_back(arr[low]);
                low--;
            } 
            else if((arr[high]-x)<(x-arr[low])){
                ans.push_back(arr[high]);
                high++;
            } 
            else if((arr[high]-x)>(x-arr[low])){
                ans.push_back(arr[low]);
                low--;
            } 
            if(ans.size()==k) return ans;
        }
        }
        return ans;
    }
int main(){
    int x=3;
    int k=7;
    vector<int> arr={-2,-1,1,2,3,4,5};
    vector<int> ans=findClosestElements(arr,k,x);
    // cout<<ans.size();
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    }
