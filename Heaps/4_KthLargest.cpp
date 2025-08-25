#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={4,2,6,12,1,-9,0};
    priority_queue<int,vector<int>, greater<int>> pq;
    int k=2;
    for(int i=0;i<sizeof(arr)/4;i++){
        pq.push(arr[i]);
        if(pq.size()>=k) pq.pop();
    }
    cout<<k<<" th largest element is -> "<<pq.top();
}