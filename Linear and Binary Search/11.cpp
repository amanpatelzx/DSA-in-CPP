#include<iostream>//
#include<vector>
using namespace std;//roated array index by binary search
int main(){
    vector<int> v1={6,7,8,9,1,2,3,4,5,6,7};
    int low=0;
    int high=v1.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        // if(mid==0) low=mid+1;
        // else if(mid==v1.size()-1) high=mid-1;
        if(v1[mid]<v1[mid-1] and v1[mid]<v1[mid+1]){
            cout<<mid;
            break;
        }
        else if(v1[mid]>v1[mid-1] and v1[mid]<v1[mid+1] and v1[low]>v1[mid]) high=mid-1;
        else if(v1[mid]>v1[mid-1] and v1[mid]<v1[mid+1] and v1[low]<v1[mid]) low=mid+1;
        else if(v1[mid]>v1[mid-1] and v1[mid]>v1[mid+1]){
            cout<<mid+1;
            break;
        }
    }
   
}
