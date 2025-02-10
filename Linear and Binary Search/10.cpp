#include<iostream>//
#include<vector>
using namespace std;//everest of array by binary search
int main(){
    vector<int> v1={3,5,3,2,0};
    int low=0;
    int high=v1.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(mid==0) low=mid+1;
        else if(mid==v1.size()-1) high=mid-1;
        else if(v1[mid]>v1[mid-1] and v1[mid]>v1[mid+1]){
            cout<<mid;
            break;
        }
        else if(v1[mid]>v1[mid-1] and v1[mid]<v1[mid+1]) low=mid+1;
        else if(v1[mid]<v1[mid-1] and v1[mid]>v1[mid+1]) high=mid-1;
    }
   
}
