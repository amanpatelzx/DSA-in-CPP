#include<iostream>
#include<vector>
using namespace std;
void removed(vector<int>&v,int b,vector<int>&v1,int a){
if(a>=v.size()) return;
if(v[a]!=b) v1.push_back(v[a]);
removed(v,b,v1,a+1);
}
int main(){
    int x,a,c;
    cout<<"Enter the no. of element : ";
    cin>>x;
    vector<int>v(x);
    vector<int>v1;
    for(int i=0;i<x;i++){
        cin>>c;
        v[i]=c;
    }
    cout<<"Enter the digit u want to removed : ";
    cin>>a;
    removed(v,a,v1,0);
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
}