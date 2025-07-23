#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(20);
    st.push(20);
    st.push(20);
    st.push(233);
    st.push(7);
    while(st.size()!=0){//this is in reverse order
        cout<<st.top()<<" ";
        st.pop();
    }
    
}//this will loose the data in stacks