#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int> digits(int n){
    vector<int> ans;
    while(n>0){
        if(n%10 != 0) ans.push_back(n%10);
        n/=10;
    }
    return ans;
}
    int helper(int n ,vector<int> &dp){
        if(n==0) return 0;
        if(n<10) return 1;
        if(dp[n]!=-1) return dp[n];
        vector<int> d = digits(n);
        int ans = INT_MAX;
        for(int i=0 ; i<d.size(); i++){
            ans = min (ans , helper(n-d[i],dp));
        }
        return dp[n] = 1 + ans;
    }
int main(){
    int n;
    cout<<"Enter the No. -> ";
    cin>>n;
    vector<int> dp(n+2,-1);
    cout<<helper(n , dp);
}