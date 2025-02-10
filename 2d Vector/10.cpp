#include<iostream>//paskal triangle without using ncr
#include<vector>
using namespace std;
int main(){
    int x,a=0,b=0;
    cout<<"Enter there row :";
    cin>>x;
    vector<vector<int>>v(x);
    v[0]={1};
    v[1]={1,1}; 
    for(int i=2;i<x;i++){
        for(int j=0;j<=i;j++){
            a=v[i-1][j-1]+v[i-1][j]; 
            if(j==0 || j==i) v[i].push_back(1);
            else v[i].push_back(a);
        } 

    }
    for(int i=0;i<v.size();i++){
        for(int j=x-i-1;j>0;j--){
            cout<<"  ";
        }
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<"  ";
        }
        cout<<endl;
    }
    }
