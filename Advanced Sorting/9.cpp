#include<iostream>//this is quickSELECT
#include<vector>//
using namespace std;//
int itsplace(vector<int>&arr,int si,int ei){
    int idx=0;
    int a=si,b=ei;
    for(int i=si+1;i<=ei;i++){
        if(arr[si]>arr[i]) idx++;
    }
    swap(arr[si],arr[si+idx]);
    int pi=si+idx;
    while(a<pi and b>pi){
        if(arr[a]>arr[pi] and arr[b]<arr[pi]){
            swap(arr[a],arr[b]);
            a++;
            b--;
        }
        else if(arr[a]<=arr[pi]) a++;
        else b--;
    }
    return pi;
}
int quickselect(vector<int>&arr,int si,int ei,int k){
    int p=itsplace(arr,si,ei);
    if(p+1==k) return arr[p];
    else if(p+1<k) return quickselect(arr,p+1,ei,k);
    else return quickselect(arr,si,p-1,k);
}
int main(){
    vector<int> arr={5,78,4,2,6,1,8};
    int k=3;//this is the kth smallest element
    cout<<quickselect(arr,0,arr.size()-1,k);
}