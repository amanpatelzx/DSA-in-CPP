#include<iostream>//this withot storing in vector
#include<cmath>//to print all factor f a no.
using namespace std;
void toprime(int n){
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0) {
            if(i*i!=n) cout<<i<<", ";
        }
        else cout<<i<<" ,";
    }
    for(int i=sqrt(n);i>0;i--){
        if(n%i==0) {
            cout<<n/i<<", ";
        }
    }
}
int main(){
    int a=100;
    toprime(a);
}