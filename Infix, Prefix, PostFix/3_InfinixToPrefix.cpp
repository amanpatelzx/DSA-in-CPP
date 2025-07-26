#include<iostream>//this is infix to prefix of this code this string ;
#include<stack>
using namespace std;
int priority(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2;
}
int main(){
    string s="2+6*4/8-3";
    stack<string> val;
    stack<char> op;
    for(int i=0;i<s.size();i++){//yaha string ss=to_string(s[i]), val.push(ss); i dont know why this is not working
        if(s[i]>=48 && s[i]<=57) val.push(string(1,s[i]));//this line is crucial
        else {//becouse you cant directly push char into stack string, so first convert it into string
            if(op.size()==0) op.push(s[i]);
            else if(priority(s[i])>priority(op.top())) op.push(s[i]);
            else {
                while(op.size()>0 && priority(s[i])<=priority(op.top())){
                    string val2=val.top();
                    val.pop();
                    string val1= val.top();
                    val.pop();
                    string ans=op.top()+val1+val2;
                    val.push(ans);
                    op.pop();
                }
                op.push(s[i]);
            }
        }
    }
    if(op.size()!=0){
        string val2=val.top();
        val.pop();
        string val1= val.top();
        val.pop();
        string ans=op.top()+val1+val2;
        val.push(ans);
        op.pop();
    }
    cout<<val.top();
}   