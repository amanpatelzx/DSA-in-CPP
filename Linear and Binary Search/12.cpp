#include<iostream>//
#include<vector>
using namespace std;//roated array index by binary search
int main(){
    vector<int> v1={6,7,8,9,1,2,3,4,5};
    int a;
    int target=5;
    int low=0;
    int high=v1.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        // if(mid==0) low=mid+1;
        // else if(mid==v1.size()-1) high=mid-1;
        if(v1[mid]<v1[mid-1] and v1[mid]<v1[mid+1]){
            cout<<mid;
            a=mid;
            break;
        }
        else if(v1[mid]>v1[mid-1] and v1[mid]<v1[mid+1] and v1[low]>v1[mid]) high=mid-1;
        else if(v1[mid]>v1[mid-1] and v1[mid]<v1[mid+1] and v1[low]<v1[mid]) low=mid+1;
        else if(v1[mid]>v1[mid-1] and v1[mid]>v1[mid+1]){
            cout<<mid+1;
            a=mid+1;
            break;
        }
    }
    cout<<endl;
    if(target>=v1[0] and target<v1[a-1]){
        int ans= v1[a-1]-target;
        cout<<"Required result is -> "<<a-ans-1;
    }
    else if(target>=v1[a] and target<v1[v1.size()-1]){
        int ans= target-v1[a];
        cout<<"Required result is -> "<<a+ans;
    }
   
}
