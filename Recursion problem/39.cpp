#include<iostream>//this solution coused momory limit exeeceded
#include<vector>
using namespace std;
int fun(int n,int k,vector<int>&v){
    vector<int>ans;
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
    return fun(n-1,k,v);
}
int main(){
    int n,k;
    cout<<"Enter n and k -> ";
    cin>>n>>k;
    vector<int>v(1,0);
    cout<<fun(n-1,k,v);
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}