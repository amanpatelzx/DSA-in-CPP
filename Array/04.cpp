#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int a[x];
    
    for(int i=0;i<x;i++){
        cin>>a[i];
        
    }
    a[3]=5;
    for(int i=0;i<x;i++){
    cout<<a[i]<<" ";
    }
}