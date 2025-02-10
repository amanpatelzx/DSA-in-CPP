#include<iostream>
using namespace std;
    int x,f=1;//this my method
int fact(int n){//but sir has different
    if(n==0) return f;
    f*=n;
    fact(n-1);
}
int main(){
    cout<<"Enter the no.-> ";
    cin>>x;
    fact(x);
    cout<<f<<" ";
}
