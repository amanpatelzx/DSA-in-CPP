#include<iostream>
using namespace std;
int stair(int a,int b,int c,int n){
    if(n<0) return 0;
    if(n==0) return 1;
    return stair(a,b,c,n-1)+stair(a,b,c,n-2)+stair(a,b,c,n-3);
}
int main(){
    int a,b,c,n;
    cout<<"Enter a,b,c,n -> ";
    cin>>a>>b>>c>>n;
    cout<<stair(a,b,c,n);
}