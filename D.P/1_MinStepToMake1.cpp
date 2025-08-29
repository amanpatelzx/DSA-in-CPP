//given problem -> give a number n;
//you can , if(n%2==0) n=n/2;
//if(n%3==0) n=n/3;
//else n=n-1;
//find the minimus step to make n into 1; return it;

#include<iostream>
#include<climits>
using namespace std;
int helper(int n, int ans){
    if(n==1) return 0;
    if(n==2) return 1;
    if(n==3) return 1;
    int one,two,three;
    one = ans+helper(n-1,ans);
    if(n%2==0) two = ans+helper(n/2,ans);
    if(n%2!=0) two = INT_MAX;
    if(n%3==0) three = ans+helper(n/3,ans);
    if(n%3!=0) three = INT_MAX;
    
    return ans = min(one,min(two,three));
}//this is recusrive solution//
//I'll opitmise this in next
int helper1(int n){
    if(n==1) return 0;
    if(n==2 || n==3) return 1;
    int one = helper1(n-1);
    int two = INT_MAX;
    int three = INT_MAX;
    if(n%2==0) two = helper1(n/2);
    if(n%3==0) three = helper1(n/3);
    
    return 1+min(one,min(two,three));
}

int main(){
    cout<<helper(60,1);
    cout<<endl;
    cout<<helper1(60);//this one is more optimise
}