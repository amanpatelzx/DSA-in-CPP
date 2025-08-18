#include<iostream>
#include<queue>
using namespace std;
int main(){//this how you insialise queue
    priority_queue<int,vector<int>, greater<int>> pq;
    pq.push(10);
    pq.push(0);
    pq.push(-7);
    pq.push(15);
    pq.push(5);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;

}