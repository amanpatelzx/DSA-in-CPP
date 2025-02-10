#include<iostream>
#include<vector>
using namespace std;
int fun(int n,int k,vector<int>ans,vector<int>&v){
    if(n==0){
        return v[k-1];
    }
    for(int i=0;i<v.size();i++){
        if(v[i]==0){
            ans.push_back(0);
            ans.push_back(1);
        }
        else {
            ans.push_back(1);
            ans.push_back(0);
        }
    }
    v=ans;
    return fun(n-1,k,ans,v);
}
int main(){
    int n,k;
    cout<<"Enter n and k -> ";
    cin>>n>>k;
    vector<int>v(1,0);
    vector<int>v1;
    cout<<fun(n-1,k,v1,v);
}