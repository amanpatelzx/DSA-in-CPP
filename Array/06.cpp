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
    int b;
    cout<<"Enter the no. that you want to search\n";
    cin>>b;
    for(int i=0;i<x;i++){
        if(a[i]==b) {
            cout<<"Present";

        }
        else {
            cout<<"Not present";
        // break;
        }   
    }
    
}