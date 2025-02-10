#include<iostream>
#include<vector>
using namespace std;
void change(vector<vector<int>>&v){
    v[0][0]=100;
}
int main(){
    int x,y;
    cout<<"Enter there row and colomn :";
    cin>>x>>y;
    vector<vector<int>>v(x,vector<int> (y));
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cin>>v[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
    }
    }
