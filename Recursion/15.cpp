#include<iostream>//find odd no. between
using namespace std; 
int odd(int a,int b,int c){
    if(a>=b) return c-a;
    if(a%2==0) a=a+1;
    else a+=2;
    odd(a,b,c+a);
}
int main(){
    int a,b,c=0;
    cin>>a>>b;
    cout<<odd(a,b,c);
}
