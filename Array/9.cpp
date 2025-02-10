#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the no of element\n";
    cin>>x;
    int a[x];
    cout<<"Enter the element\n";
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    int c=a[0];
    for(int i=1;i<x;i++){
        c=min(c,a[i]);
        }
        cout<<"min no. of all of them is "<<c;
        
           
    
    
}