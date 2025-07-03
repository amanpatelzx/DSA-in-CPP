#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the no of element\n";
    cin>>x;
    int a[x];
    cout<<"ENter the element\n";
    for(int i=0;i<x;i++){
        cin>>a[i];
        
    }
    for(int i=1;i<x;i++){
        a[0]=a[0]+a[i];
    
    }
    cout<<"The of of all elemnt is "<<a[0];
}