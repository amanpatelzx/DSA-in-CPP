#include<iostream>
#include<vector>
#include<string>
using namespace std;
void paranthesis(int o,int c,string s,vector<string>&v1,int n){
  if(c==n){
    v1.push_back(s);
    return;
  }
  if(o<n) paranthesis(o+1,c,s+'(',v1,n);
  if(o>c )paranthesis(o,c+1,s+')',v1,n);
}
int main(){
    int x;
    cout<<"Enter the no->";
    cin>>x;
    vector<string>v;
    paranthesis(0,0,"",v,x);
    for(int i=0; i<v.size();i++){
        cout<<v[i];
    cout<<" , ";
     }
}