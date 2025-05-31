#include<iostream>//Given an integer n, find the maximum power of two that is smaller than n.
using namespace std;
int finding_2lowestpow(int a){
    int ans;
    while(a!=0){
        ans=a;
        a=a&(a-1);
    }
    return ans;
}
int main(){
    cout<<finding_2lowestpow(1025);
}
