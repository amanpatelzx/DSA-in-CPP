#include<iostream>////leetcode 39 combination sum
#include<vector>
using namespace std;
void subsum(vector<int>&v,vector<int>v1,int n,int a){
    int s=0;
    for(int i=0;i<v1.size();i++){
        s+=v1[i];
    }
    if(s==n){
    cout<<"[ ";
        for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<"] ";
        return;
    }
    if(s>n) return;
for(int i=0;i<v.size();i++){
    v1.push_back(v[i]);
    subsum(v,v1,n,a+1);
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
    for(int i=0;i<v.size();i++){
    v2.push_back(v[i]);
    subsum(v,v2,n,0);
    v2.pop_back();
}
}