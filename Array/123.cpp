#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    int b=0;
    for(int i=0;i<x;i++){
        b=max(b,a[i]);
    }
    cout<<b;
}