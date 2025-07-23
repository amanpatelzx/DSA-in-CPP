#include<iostream>
#include<stack>
using namespace std;
bool balancedBracket(string str){
    if(str.size()%2!=0) return false;
    stack<char> st;
    for(int i=0;i<str.size();i++){
        if(str[i]=='(') st.push(str[i]);
        else{
            if(st.size()==0) return false;
            else st.pop();
        }
    }
    if(st.size()==0) return true;
    else return false;
}
int main(){
    string s="(())())";
    cout<<balancedBracket(s);
}
