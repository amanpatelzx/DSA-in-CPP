#include<iostream>////leetcode 39 combination sum
#include<vector>//this sir way of solving
#include<algorithm>//less time complexity
using namespace std;
void subsum(vector<int>&v,vector<vector<int>>&vb,vector<int>v1,int n,int a){
    if(n==0){
        vb.push_back(v1);
        return;
    }
    if(n<0) return;
     for(int i=a;i<v.size();i++){
    v1.push_back(v[i]);
    subsum(v,vb,v1,n-v[i],i);
    v1.pop_back();
}
}
int main(){
    int x,n;
    cout<<"Enter no. of element in array -> ";
    cin>>x;
    vector<int>v(x);
    vector<int>v2;
    cout<<"Enter the elements of array -> ";
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    cout<<"Enter target no. -> ";
    cin>>n;
    vector<vector<int>>vb;
    vector<vector<int>>vans;
    subsum(v,vb,v2,n,0);
    for(int i=0;i<vb.size();i++){
        for(int j=0;j<vb[i].size();j++){
            cout<<vb[i][j]<<" ";
        }
        cout<<endl;
    }
}