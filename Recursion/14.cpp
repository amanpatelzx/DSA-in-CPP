#include<iostream>//a^b calculate
using namespace std;
    int n; 
int fibo(int n){
    if(n==1 or n==2) {
        cout<<"1 ";
    return 1;
    }
    cout<<(fibo(n-1)+fibo(n-2))<<" ";
}
int main(){
    cout<<"Enter n no. of fibonaci series : ";
    cin>>n;
    fibo(n);
}
