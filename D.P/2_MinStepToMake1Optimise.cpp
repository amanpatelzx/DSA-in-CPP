//given problem -> give a number n;
//you can , if(n%2==0) n=n/2;
//if(n%3==0) n=n/3;
//else n=n-1;
//find the minimus step to make n into 1; return it;

#include<iostream>
#include<climits>
using namespace std;
int helper(int n){
    if(n==1) return 0;
    if(n==2 || n==3) return 1;
    return 1+min(helper(n-1),min(n%2==0 ? helper(n/2) : INT_MAX ,n%3==0 ? helper(n/3) : INT_MAX));
}//keep start writing like this 
int main(){
    cout<<helper(60);//more optimise by dp after next name
}