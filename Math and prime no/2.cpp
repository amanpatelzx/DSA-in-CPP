#include<iostream>//this is more optimise way
#include<cmath>
using namespace std;
bool toprime(int n){
    if(n==1) return false;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int a=991;
    cout<<toprime(a);
}