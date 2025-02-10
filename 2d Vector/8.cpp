#include<iostream>
#include<vector>
using namespace std;
void change(vector<vector<int>>&v){
    v[0][0]=100;
}
int main(){
    int x,a;
    cout<<"Enter there row and colomn :";
    cin>>x;
    vector<vector<int>>v(x);
    for(int i=0;i<x;i++){
        for(int j=0;j<10000;j++){
            cin>>a;
            if(a==111) break;
            v[i].push_back(a);
        }
        cout<<endl;
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    }
