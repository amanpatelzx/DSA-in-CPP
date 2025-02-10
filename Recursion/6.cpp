#include<iostream>
using namespace std;
    int x;
void fun(int i,int n){
    if(i>n) return;
    cout<<i<<" ";
    fun(i+1,n);
}
int main(){
    cout<<"Enter the no.-> ";
    cin>>x;
    fun(1,x);//very effective note it down
}
