#include<iostream>
#include<vector>
#include<string>
using namespace std;
void paranthesis(int x,string s,vector<string>&v1,int n,string str){
  if(x<=0){
    int a=0;
    for(int i=0;i<s.size();i++){
    if(s[s.size()-1]==s[0]) return;
        else if((s[i]==s[0])) a++;
    }
    int b=v1.size();
    if(b>0) if(v1[b-1]==str) return;
    if(a==s.size()/2) v1.push_back(s);
    return;
  }
     paranthesis(x-1,s+'(',v1,n,str);
     paranthesis(x-1,s+')',v1,n,str);
}
int main(){
    int x;
    cout<<"Enter the no->";
    cin>>x;
    string str="";
    vector<string>v;
    for(int i=0;i<x;i++){
        str+="()";
    }
    paranthesis(2*x-1,"(",v,x,str);
    for(int i=0; i<v.size();i++){
        cout<<v[i];
    cout<<" , ";
     }
}