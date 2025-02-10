#include<iostream>
#include<vector>
#include<string>
using namespace std;
void paranthesis(int x,string s,vector<string>&v1){
  if(x<=0){
    int a=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==s[0]) a++;
    }
    if(a<=(x+1)/2) v1.push_back(s);
    else return;
  }
     paranthesis(x-1,s+'(',v1);
     paranthesis(x-1,s+')',v1);
}
int main(){
    int x;
    cout<<"Enter the no->";
    cin>>x;
    vector<string>v;
    paranthesis(2*x-1,"(",v);

    for(int i=0; i<v.size();i++){
        cout<<v[i];
    cout<<" , ";
    }
}