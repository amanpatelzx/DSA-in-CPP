#include<iostream>
#include<vector>
using namespace std;
    int x;
void p(int k,vector<int>&v){
    vector<int>c(x);
    for(int i=0;i<x;i++){
        c[i]=v[i];
    }
    for(int i=0;i<=k;i++){
        int temp=c[i];
        c[i]=v[x-k+i];
        }
    for(int j=k;j<x;j++){
            c[j]=v[j-k];
        }
     cout<<"Your required no are ";
    for(int i=0;i<x;i++){
        cout<<c[i]<<" ";
    }
    
}
int main(){
    cout<<"Enter the no. of Element you want to give \n";
    cin>>x;
    
    vector<int>v;
    for(int i=0;i<x;i++){
        int y;
        cin>>y;
        v.push_back(y);
    
    }
    int k;
    cout<<"Enter the no. from to there\n";
    cin>>k;
    if(k>x){
    if(k/x>=1) k=k%x;
    }
    cout<<"Your required no are ";
    p(k,v);


}