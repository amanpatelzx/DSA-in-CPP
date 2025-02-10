#include<iostream>//
#include<vector>
using namespace std;
int fact(int f){
    int c=1;
    for(int i=1;i<=f;i++){
        c=c*i;
    }
    return c;
}
int  ncr(int n, int r){
   int t=fact(n)/(fact(n-r)*fact(r));
   return t;
}
int main(){
    int x,a=0,b=0;
    cout<<"Enter there row :";
    cin>>x;
    vector<vector<int>>v(x);
    for(int i=0;i<x;i++){
        for(int j=0;j<i+1;j++){
            a=ncr(i,j);
            v[i].push_back(a);
        }
    }
    
    for(int i=1;i<=b;i++){
        v.push_back(v[i]);
    }
    for(int i=0;i<v.size();i++){
        // for(int j=x-i-1;j>0;j--){
        //     cout<<"  ";
        // }
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<"  ";
        }
        cout<<endl;
    }
    }
