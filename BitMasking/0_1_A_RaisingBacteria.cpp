#include<iostream>
using namespace std;
long long NoOfSetBit(long long n){
    long long count = 0;
    while(n){
        n = ( n & (n-1) );
        count++;
    }
    return count;
}
int main(){
    long long n;
    cin >> n;
    cout << NoOfSetBit(n);
}