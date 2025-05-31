#include<iostream>//Given an integer n, find the maximum power of two that is greater than n.
using namespace std;
int finding_2greatestpower(int a){
    a=a|(a>>1);
    a=a|(a>>2);
    a=a|(a>>4);
    a=a|(a>>8);
    a=a|(a>>16);
    return (a+1);
}
int finding_2greatestpow(int a){
    int ans;
    while(a!=0){
        ans=a;
        a=a&(a-1);
    }
    return 2*ans;
}
int main(){
    cout<<finding_2greatestpow(50);
    cout<<endl;
    cout<<finding_2greatestpower(50);
}
