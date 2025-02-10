#include<iostream>
#include<vector>
using namespace std;
void subset(vector<int>ans,vector<int>&v,int a,vector<vector<int>>&v1,int d){
    if(a==v.size()){  
      if(ans.size()==d)v1.push_back(ans);
      return;
    }
    if(ans.size()+v.size()-a<d) return;//reduce time complexity
    subset(ans,v,a+1,v1,d);
    ans.push_back(v[a]);
    subset(ans,v,a+1,v1,d);
}
int main(){
    int x,d;
    cout<<"Enter the no of element : ";
    cin>>x;
    string s;
    vector<int>v(x);
    vector<int>v2;
    vector<vector<int>>v1;
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    cout<<"Enter the d : ";
    cin>>d;
    // cout<<"Enter the string : ";
    // cin>>s;
    subset(v2,v,0,v1,d);
   for(int i=v1.size();i>=0;i--){
    for(int j=0;j<v1[i].size();j++){
      cout<<v1[i][j]<<" ";
   }
   cout<<endl;
   }
   
}
