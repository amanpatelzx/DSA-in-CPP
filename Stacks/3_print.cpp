#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    stack<int> st1;
    st.push(20);
    st.push(20);
    st.push(20);
    st.push(233);
    st.push(7);
    while(st.size()!=0){//this is in reverse order
        cout<<st.top()<<" ";
        st1.push(st.top());
        st.pop();
    }
    cout<<endl;
    while(st1.size()!=0){
        cout<<st1.top()<<" ";//this will print original order
        st.push(st1.top());
        st1.pop();
    }
    
}