#include<iostream>//finding HCF by very efficent way
#include<cmath>//important
using namespace std;
int HCF(int a,int b,int x,int z){
    if(x==0) return z;
    int y=a/b;
    z=x;
    x=a-b*y;
    return HCF(z,x,x,z);
}
int main(){
    int a,b;
    cout<<"Enter the two no. for HCF : ";
    cin>>a>>b;
    cout<<HCF(max(a,b),min(a,b),min(a,b),min(a,b));
}