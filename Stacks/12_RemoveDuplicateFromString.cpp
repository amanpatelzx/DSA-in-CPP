#include<iostream>
#include<stack>
using namespace std;
string RemoveDuplicateFromString(string str){
    string s;
    stack<char> st;
    st.push(str[str.size()-1]);
    for(int i=str.size()-2;i>=0;i--) if(str[i]!=st.top()) st.push(str[i]);
    int n=st.size();//this is very imporatant
    //if we do  for(int i=0;i<st.size();i++){ then error dega
    // for(int i=0;i<n;i++){//becouse st ka size change ho raha hai
    //     s.push_back(st.top());
    //     st.pop();
    // }
    //ya ye bhi kar sakte ho
    while(st.size()!=0){
        s.push_back(st.top());
        st.pop();
    }
    return s;
}
int main(){
    string s="helloooomyfreind";
    cout<<RemoveDuplicateFromString(s);
}
