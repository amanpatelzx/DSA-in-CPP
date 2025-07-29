#include<iostream>//FIFO->First in first out
#include<queue>
using namespace std;
int main(){//STL -> Standard tempelate library
    queue<int> q;
    //push
    //pop
    //front-> top;
    //size,empty;
    //back
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    cout<<"The size is -> "<<q.size()<<endl;
    cout<<"The Front element is -> "<<q.front()<<endl;
    // cout<<q.back()<<endl;
    q.pop();
    cout<<"The size is -> "<<q.size()<<endl;
    cout<<"The Front element is -> "<<q.front()<<endl;
    
}