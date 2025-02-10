#include<iostream>//this is more ifficient way
#include<vector>//of solving this
using namespace std;//subarray;
void subset(vector<int>&v,vector<vector<int>>&vb,vector<int>ans,int a){
    if(a==v.size()){
        vb.push_back(ans);
        return;
    }
    subset(v,vb,ans,a+1);
    if(ans.size()==0 || v[a-1]==ans[ans.size()-1] ){
    ans.push_back(v[a]);
    subset(v,vb,ans,a+1);
    }
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
    cout<<endl;
    subset(v,vb,ans,0);
    for(int i=vb.size()-1;i>0;i--){
        for(int j=0;j<vb[i].size();j++){
            cout<<vb[i][j]<<" ";
        }
        cout<<endl;
    }
}