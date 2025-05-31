  n#include<iostream>//
#include<vector>
using namespace std;//roated array index by binary search
int main(){
    vector<int> v1={5,1,2,3,4};
    int a;
    int target=4;
    int d=v1.size()-1;
    int low=0;
    int high=v1.size()-1;
       while(low<=high){
        int mid=(low+high)/2;
    if(v1[mid]==target){ 
        cout<<mid;
        break;
    }
    else if(v1[mid]<target) low=mid+1;
    else high=mid-1;
       }
       low=0;
    high=v1.size()-1;
    while(low<=high){
        if(v1.size()<=2) break;
        int mid=low+(high-low)/2;
        if(mid>0 and mid<=d and v1[mid]<v1[mid-1] and v1[mid]<v1[mid+1]){
            a=mid;
            break;
        }
        else if(mid>0 and mid<=d and v1[mid]>v1[mid-1] and v1[mid]<v1[mid+1] and v1[low]>v1[mid]) high=mid-1;
        else if(mid>0 and mid<=d and v1[mid]>v1[mid-1] and v1[mid]<v1[mid+1] and v1[low]<v1[mid]) low=mid+1;
        else if(mid>0 and mid<=d and v1[mid]>v1[mid-1] and v1[mid]>v1[mid+1]){
            a=mid+1;
            break;
        }
    }
    // cout<<a<<endl;
     low=0;
     high=a;
       while(low<=high){
        if(v1.size()<=2) break;
        int mid=(low+high)/2;
    if(v1[mid]==target){
        cout<<mid;
        break;
    }
    else if(v1[mid]<target) low=mid+1;
    else high=mid-1;
 }
    low=a;
    high=v1.size()-1;
       while(low<=high){
        if(v1.size()<=2) break;
        int mid=(low+high)/2;
    if(v1[mid]==target){
        cout<<mid;
        break;
    }
    else if(v1[mid]<target) low=mid+1;
    else high=mid-1;
 }
}
