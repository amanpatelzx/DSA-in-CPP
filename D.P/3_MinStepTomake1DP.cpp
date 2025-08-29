//given problem -> give a number n;
//you can , if(n%2==0) n=n/2;
//if(n%3==0) n=n/3;
//else n=n-1;
//find the minimus step to make n into 1; return it;

#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int helper(int n,vector<int> & dp){
    if(n==1) return 0;
    if(n==2 || n==3) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n] = 1+min(helper(n-1,dp),min(n%2==0 ? helper(n/2,dp) : INT_MAX ,n%3==0 ? helper(n/3,dp) : INT_MAX));
}//keep start writing like this
int bottomUp(int n,vector<int> & dp){
    dp.clear();//this will clear the dp ,ans 
    dp.resize(n,-1);//resize according to you;
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    for(int i=3;i<n;i++){
        dp[i] = 1+min(dp[i-1],min(i%2==0 ? dp[i/2] : INT_MAX ,i%3==0 ? dp[i/3] : INT_MAX));
    }
    return dp[n];
} 
int main(){
    vector<int> dp(63,-1);
    cout<<helper(60,dp)<<endl;//more optimise by dp after next name
    cout<<bottomUp(60,dp);
}