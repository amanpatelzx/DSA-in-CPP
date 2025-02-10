#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a=0,b=0;
    cout<<"Enter there row and colomn :";
    vector<vector<int>>v;
    for(int i=0;i<10000;i++){
        vector<int>vi;
        for(int j=0;j<1000;j++){
            cin>>a;
            v[i].push_back(a);
            b++;
            if(a==111) break;
            if(a==1111) break;
        }
        if(a==1111) break;
        cout<<endl;
    }
    
    for(int i=1;i<=b;i++){
        v.push_back(v[i]);
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    }
