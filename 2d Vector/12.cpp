#include<iostream>//paskal triangle without using ncr
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter there row :";
    cin>>x;
    vector<vector<int>>v; 
    for(int i=0;i<x;i++){
        vector<int>v1(i+1);
        v.push_back(v1);
        for(int j=0;j<=i;j++){ 
            if(j==0 || j==i) v[i][j]=1;
            else v[i][j]=v[i-1][j]+v[i-1][j-1];
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
