#include<iostream>
using namespace std;
    int x;
int fun(int n){
    if(n==0) return 0;
    return n+fun(n-1);
    
}
int main(){
    cout<<"Enter the no.-> ";
    cin>>x;
    cout<<fun(x);
}
