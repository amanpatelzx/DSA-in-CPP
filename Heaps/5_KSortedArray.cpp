#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){//here only element can be sorted in range of [-k,k];
    vector<int> arr={4,2,6,12,1,-9,0};//yaha pe int arr[] bi use kar sakte the , but syntx me koi farak nahi waha vector<int> ho likhna hota    
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int> ans;
    priority_queue<int,vector<int>, greater<int>> pq;
    int k=3;
    for(int i=0;i<arr.size();i++){
        pq.push(arr[i]);
        if(pq.size()>=k){
            ans.push_back(pq.top());
             pq.pop();
        }
    }
    while(pq.size()!=0){
        ans.push_back(pq.top());
        pq.pop();
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}