#include<iostream>//finding HCF by very efficent way
#include<cmath>//important
using namespace std;
int HCF(int a,int b){
    if(b==0) return a;
    else return HCF(b,a%b);
}
int main(){
    int a,b;
    cout<<"Enter the two no. for HCF : ";
    cin>>a>>b;
    cout<<HCF(max(a,b),min(a,b));

}