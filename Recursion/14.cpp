#include<iostream>//a^b calculate
using namespace std;
    int n; 
int fibo(int n){
    if(n==1 or n==2){
    return 1;
    }
    return (fibo(n-1)+fibo(n-2));
}
int main(){
    cout<<"Enter n no. of fibonaci series : ";
    cin>>n;
    for(int i=1;i<=n;i++){
    cout<<fibo(i)<<" ";
    }
}
