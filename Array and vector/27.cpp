#include<iostream>
#include<vector>
using namespace std;
    int x;
    void sort(vector<int>&v){
        int n0=0;
        int n1=0;
        for(int i=0;i<x;i++){
            if(v[i]==0) n0++;
            else n1++;
        }
        for(int i=0; i<x;i++){
            if(i<n0) v[i]=0;
            else v[i]=1;
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