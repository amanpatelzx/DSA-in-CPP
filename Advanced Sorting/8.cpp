#include<iostream>//this is quicksort method for sorting
#include<vector>//here time complexicity O(nlog(n))
using namespace std;//space is O(log)
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
void quicksort(vector<int>&arr,int si,int ei){
    if(si>=ei) return;
    int p=itsplace(arr,si,ei);
    quicksort(arr,si,p-1);
    quicksort(arr,p+1,ei);
}
int main(){
    vector<int> arr={5,3,4,2,6,1};
    int si=0,ei=arr.size()-1;
    quicksort(arr,si,ei);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}