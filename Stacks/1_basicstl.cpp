#include<iostream>//LIFO->Last in first out
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(20);
    st.push(20);
    cout<<st.size()<<"\n";
    st.push(20);
    st.push(233);
    st.push(7);
    cout<<st.size()<<"\n";
    st.pop();
    cout<<st.size()<<"\n";
    cout<<st.top();
}