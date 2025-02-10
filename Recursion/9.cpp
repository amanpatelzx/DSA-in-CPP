#include<iostream>
using namespace std;
    int x,s=0;
void fun(int n){
    if(n==0) return;
    s+=n;
    fun(n-1);//call
}
int main(){
    cout<<"Enter the no.-> ";
    cin>>x;
    fun(x);
    cout<<s;
}
