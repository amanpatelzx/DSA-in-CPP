#include<iostream>//this solution my effort
#include<vector>
#include<cmath>
using namespace std;
int fun(int n,int k){
    if(n==2){
        if(k==1) return 1;
        else return 0;
    }
    int b=pow(2,n-1);
    int c=pow(2,n-2);
    if(k>b/2){
        k=k-b/2;
    if(k>c/2) {
        k=k-c/2;
        return fun(n-1,k);
    }
    else return fun(n-1,k);
    }
   if(k<=b/2){
        k=b/2-k+1;
    if(k<=c/2) {
        k=c/2-k;
        return fun(n-1,k);
    }
    else return fun(n-1,k);
    }
}
int main(){
    int n,k;
    cout<<"Enter n and k -> ";
    cin>>n>>k;
    cout<<fun(n,k);
}
