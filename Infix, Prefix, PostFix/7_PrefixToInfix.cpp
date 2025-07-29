#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s="-+2/*6483";
    stack<string> val;
    for(int i=s.size()-1;i>=0;i--){//learned this my freind;
        if(s[i]>=48 && s[i]<=57) val.push(string(1,s[i]));
        else{
            string val1=val.top(); 
            val.pop();
            string val2=val.top();
            val.pop();
            string ans=val1+s[i]+val2;
            val.push(ans);
        }
    }
    cout<<s<<"  to infix = "<<val.top();
} 