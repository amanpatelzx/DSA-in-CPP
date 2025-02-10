#include<iostream>
#include<vector>
using namespace std;
    int x;
void p(int m,int n,vector<int>&v){
    vector<int>c(x);
    for(int i=0;i<x;i++){
        c[i]=v[i];
    }
    
    while(m<=n){
        int temp=c[m];
        c[m]=c[n];
        c[n]=temp;
        m++; 
        n--;
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
    int m,n;
    cout<<"Enter the no. from to there\n";
    cin>>m>>n;
    cout<<"Your required no are ";
    p(m,n,v);


}




