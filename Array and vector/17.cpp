#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x,z;
    cout<<"Enter the no. of Element you want to give \n";
    cin>>x;
    
    vector<int>v;
    for(int i=0;i<x;i++){
        int y;
        cin>>y;
        v.push_back(y);
    
    }
    vector<int>d;//important also view the diiference b/n this and next program
    for(int i=0;i<x;i++){
        d.push_back(v[x-1-i]);
    }
    cout<<"Your required index is ";
    for(int i=0;i<x;i++){
        cout<<d[i]<<" ";
    }





}




