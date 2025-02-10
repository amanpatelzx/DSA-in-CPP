#include<iostream>//leetcode 39 combination sum
#include<vector>
#include<algorithm>
using namespace std;
void subsum(vector<int>&v,vector<vector<int>>&vb,vector<int>v1,int n,int a){
    int s=0;
    for(int i=0;i<v1.size();i++){
        s+=v1[i];
    }
    if(s==n){
        sort(v1.begin(),v1.end());
        vb.push_back(v1);
        return;
    }
    if(s>n) return;
for(int i=0;i<v.size();i++){
    v1.push_back(v[i]);
    subsum(v,vb,v1,n,a+1);
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
     for(int i=0;i<v.size();i++){
    v2.push_back(v[i]);
    subsum(v,vb,v2,n,0);
    v2.pop_back();
}
    for(int i=0;i<vb.size();i++){
        for(int j=0;j<vb[i].size();j++){
            cout<<vb[i][j]<<" ";
        }
        cout<<endl;
    }
    sort(vb.begin(),vb.end());
    for(int i=0;i<vb.size();i++){
        if(i==0) vans.push_back(vb[i]);
        else if(i>0 and vb[i]!=vb[i-1]) vans.push_back(vb[i]);
}
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
for(int i=0;i<vans.size();i++){
        for(int j=0;j<vans[i].size();j++){
            cout<<vans[i][j]<<" ";
        }
        cout<<endl;
    }
}