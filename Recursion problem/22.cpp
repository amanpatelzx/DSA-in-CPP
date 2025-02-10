#include<iostream>
using namespace std;
int HCF(int a,int b,int x){
    if(a%x==0 and b%x==0) return x;
    return HCF(a,b,x-1);
}
int main(){
    int a,b;
    cout<<"Enter the teo no. for HCF : ";
    cin>>a>>b;
    cout<<HCF(a,b,min(a,b));
}