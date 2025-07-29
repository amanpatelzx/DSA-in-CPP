#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s="264*8/+3-";
    stack<string> val;
    for(int i=0;i<s.size();i++){//learned this my freind;
        if(s[i]>=48 && s[i]<=57) val.push(string(1,s[i]));
        else{
            string val2=val.top(); 
            val.pop();
            string val1=val.top();
            val.pop();
            string ans=val1+s[i]+val2;
            val.push(ans);
        }
    }
    cout<<s<<"  to infix = "<<val.top();
}