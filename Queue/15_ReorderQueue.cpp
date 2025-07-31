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
    cout<<endl;
}
int main(){//interleve 1st half to 2nd half
     queue<int> q;
    stack<int> st;
    int n;
    cout<<"Enter the no.-> ";
    cin>>n;
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    display(q);
    int s=q.size();
    s=s/2;
    for(int i=0;i<s;i++){
        st.push(q.front());
        q.pop();
    }
    for(int i=0;i<s;i++){
        q.push(st.top());
        st.pop();
    }
    for(int i=0;i<s;i++){
        st.push(q.front());
        q.pop();
    }
    for(int i=0;i<s;i++){
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    // display(q);
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    display(q);
}