#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(0);
    pq.push(-7);
    pq.push(15);
    pq.push(5);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;

}