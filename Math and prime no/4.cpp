#include<iostream>
#include<cmath>
using namespace std;
bool prime(int n){
        for(int i=2;i<=sqrt(n);i++) if(n%i==0) return false;
        return true;
     }
    int countPrimes(int n) {
        int count=0;
        if(n<=2) return 0;
        if((n-1)%2!=0) n=n;
        else n=n-1;
        for(int i=n-1;i>1;i=i-2){
            if(prime(i)==true) count++;
        }
        return count+1;
    }
int main(){
    int n=5000000;
  cout<<"Ans is -> "<<countPrimes(n);

}