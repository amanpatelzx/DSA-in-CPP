#include<iostream>
#include<vector>
using namespace std;
    int x;
    void sort(vector<int>&v){
        int j=x-1;
        for(int i=0;i<x;i++){
            int d=v[i];
            if(v[i]!=v[j-i] and v[i]==1){
            v[i]=v[j-i];
            v[j-i]=d;
            }
        }
    
        
        for(int i=0; i<x;i++){
         cout<<v[i]<<" ";
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

   
    sort(v);


}