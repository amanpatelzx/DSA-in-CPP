#include<iostream>//understand this concept and keep in your mind;
#include<stack>//may be aked in interview;
using namespace std;
int solve(int val1,int val2,char ch){
    if(ch=='+') return (val1+val2);
    if(ch=='-') return (val1-val2);
    if(ch=='*') return (val1*val2);
    else return (val1/val2);
}
int priority(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2;
}
int main(){
    string s1="2+6*4/8-3";//this is infinix expresion
    string s="2+6*4/1+8-3";//this is infinix expresion
    //we need two stack , 1 for val, 2nd for opration;
    stack<int> val;
    stack<char> op;
    for(int i=0; i<s.size(); i++){
        //check if s[i] is digit (0,9);
        int ascii=int(s[i]);
        if(s[i]>=48 && s[i]<=57) val.push(s[i]-48);
        else{//this store eg-> +,-,*,/;
            if(op.size()==0) op.push(s[i]);
            else if(priority(s[i])>priority(op.top())) op.push(s[i]);
            else{//work  if -> priority(s[i]<=priority[op.top[i]]
                while(op.size()>0 && priority(s[i])<=priority(op.top())){
                    char ch =op.top();
                    op.pop();
                    int val2=val.top();
                    val.pop();
                    int val1=val.top();
                    val.pop();
                    int ans=solve(val1,val2,ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }

        }
    }
    while(!op.empty()){
        char ch =op.top();
        op.pop();
        int val2=val.top();
        val.pop();
        int val1=val.top();
        val.pop();
        int ans=solve(val1,val2,ch);
        val.push(ans);
    }
    cout<<s<<" = "<<val.top();
}