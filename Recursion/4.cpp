#include<iostream>
using namespace std;
int fact(int x){
    if(x==0) return 1;
    return x*fact(x-1);
}
int main(){
int x;//this sir method
    cout<<"Enter the no.-> ";
    cin>>x;
    cout<<fact(x)<<" ";
}
