#include<iostream>
#include<vector>
using namespace std;
void fun(vector<int>&v){
    for(int i=0; i<v.size();i++){     
        // cout<<v[i]<<" ";          
    }

}
int main(){
    int x;
    cout<<"Enter no. of row: ";
    cin>>x;
   
    cout<<endl;
    vector<int>v(x);
    cout<<"Enter Elements: ";
    for(int i=0;i<x;i++){    
        cin>>v[i];   
    }
     int y;
    cout<<"Enter Target: ";
    cin>>y;
    fun(v);
    for(int i=0; i<x; i++){
    if(v[i]+v[i+1]==y){
        cout<<"yes";
        break;
    }
    else{
        cout<<"no";
        }
    }
}