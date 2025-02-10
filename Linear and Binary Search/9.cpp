#include<iostream>//
#include<vector>
using namespace std;//everest of array by binary search
int main(){
    vector<int> v1={1,2,3,4,5,4,3};
    int low=0;
    int high=v1.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(v1[mid]>v1[mid-1] and v1[mid]>v1[mid+1]){
            cout<<mid;
            break;
        }
        else if(v1[mid]>v1[mid-1] and v1[mid]<v1[mid+1]) low=mid+1;
        else if(v1[mid]<v1[mid-1] and v1[mid]>v1[mid+1]) high=mid-1;
    }
   
}
