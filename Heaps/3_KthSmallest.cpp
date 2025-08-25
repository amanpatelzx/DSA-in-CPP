#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq;
    int arr[]={4,2,6,4,1,-9,0};
    int k=3;
    for(int i=0;i<sizeof(arr)/4;i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<k<<" th smallest element is -> "<<pq.top();
}