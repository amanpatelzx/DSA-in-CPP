#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> a;
    stack<int> b;
    stack<int> c;
    a.push(20);
    a.push(20);
    a.push(20);
    a.push(233);
    a.push(7);
    while(a.size()!=0){
        cout<<a.top()<<" ";
        b.push(a.top());
        a.pop();
    }
    cout<<endl;
    while(b.size()!=0){
        cout<<b.top()<<" ";
        c.push(b.top());
        b.pop();
    }
    cout<<endl;
    while(c.size()!=0){
        cout<<c.top()<<" ";
        a.push(c.top());
        c.pop();
    }
    // cout<<"\nREveser order \n";//this is of reverse order,my freind
    // while(a.size()!=0){
    //     cout<<a.top()<<" ";
    //     a.pop();
    // }
    
}