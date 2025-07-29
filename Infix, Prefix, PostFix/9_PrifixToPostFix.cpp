#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s="-+2/*6483";
    stack<string> val;
    for(int i=s.size()-1;i>=0;i--){//learned this my freind;
        if(s[i]>=48 && s[i]<=57) val.push(to_string(s[i]-48));
        else{
            string val1=val.top(); 
            val.pop();
            string val2=val.top();
            val.pop();
            string ans=val1+val2+s[i];//here is crucial
            val.push(ans);
        }
    }
    cout<<s<<"  to Postfix = "<<val.top();
}