#include<iostream>//a^b by logithmic method
using namespace std; //this is very efficient code
int paw(int a,int b){
    if(b==1) return a;
    int x=paw(a,b/2);//this optimise way
    if(b%2!=0){
    b=b-1;
    return a*x*x;
    }
    else return x*x;
}
int main(){
    int a,b;
    cout<<"Enter base a and power b : ";
    cin>>a>>b;
    cout<<paw(a,b);
}
