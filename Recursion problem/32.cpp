#include<iostream>////leetcode 39 combination sum
#include<vector>//this sir way of solving
#include<algorithm>//less time complexity
using namespace std;
void subsum(vector<int>&v,vector<vector<int>>&vb,vector<int>v1,int n,int a,int b){
    // if(n==0){
    if(n==0){
        vb.push_back(v1);
        return;
    }
    if(b>=v.size()) return;
     for(int i=a;i<v.size();i++){
        v1.push_back(v[a]);
        subsum(v,vb,v1,n-v[a],i+1,i+1);
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
    vector<int>v3=v;
    cout<<"Enter target no. -> ";
    cin>>n;
    vector<vector<int>>vb;
    vector<vector<int>>vans;
    int d=0;
    for(int i=0;i<v.size();i++){
    v2.push_back(v3[i-d]);
    subsum(v3,vb,v2,n-v3[i-d],1,0);
    reverse(v3.begin(),v3.end());
    v3.pop_back();
    reverse(v3.begin(),v3.end());
    d++;
    }
    // sort(vb.begin(),vb.end());
    for(int i=0;i<vb.size();i++){
        if(i==0) vans.push_back(vb[i]);
        else if(i>0 and vb[i]!=vb[i-1]) vans.push_back(vb[i]);
}
    for(int i=0;i<vans.size();i++){
        for(int j=0;j<vans[i].size();j++){
            cout<<vans[i][j]<<" ";
        }
        cout<<endl;
    }
}