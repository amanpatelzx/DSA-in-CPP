#include<iostream>
using namespace std;
    int x;
void fun(int sum,int n){
    if(n==0) {
        cout<<sum;
        return;
        }
    fun(sum+n,n-1);
}
int main(){
    cout<<"Enter the no.-> ";
    cin>>x;
    fun(0,x);
}
