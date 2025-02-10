#include<iostream>
#include<vector>
using namespace std;
void subset(vector<int>&v,vector<vector<int>>&vb,vector<int>ans,int a){
    if(a==v.size()){
        if(ans.size()>1){
        bool flag=true;
            for(int i=1;i<ans.size();i++){
            if(ans[i]-ans[i-1]!=1) flag=false; 
        }
        if(flag) vb.push_back(ans);
        }
        else vb.push_back(ans);
        return;
    }
    subset(v,vb,ans,a+1);
    ans.push_back(v[a]);
    subset(v,vb,ans,a+1);
}
int main(){
    int x;
    cout<<"Enter the no. of element : ";
    cin>>x;
    vector<int>v(x);
    vector<int>ans;
    vector<vector<int>>vb;
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    subset(v,vb,ans,0);
    for(int i=0;i<vb.size();i++){
        for(int j=0;j<vb[i].size();j++){
            cout<<vb[i][j]<<" ";
        }
        cout<<endl;
    }
}