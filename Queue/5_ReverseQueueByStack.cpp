#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int> &q){
    int n=q.size();
    while(n!=0){
    int temp=q.front();
    q.pop();
    cout<<temp<<" ";
    q.push(temp);
    n--;
    }
}
int main(){
    queue<int> q;
    stack<int> st;
    int n;
    cout<<"Enter the no.-> ";
    cin>>n;
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    int a=q.size();
    while(a>0){
        st.push(q.front());
        q.pop();
        a--;
    }
    while(st.size()!=0){
        q.push(st.top());
        st.pop();
    }
    display(q);
}