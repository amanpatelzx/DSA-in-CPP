//https://atcoder.jp/contests/dp/tasks/dp_o
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int dp[22][1<<22];
int f(int i , int mask , int n, vector<vector<int>>&c){
    if(i == n+1){
        if(mask == 0) return 1;
        else return 0;
    }
    if(dp[i][mask] != -1 ) return dp[i][mask];
    int ans = 0;
    for(int w = 1; w <= n; w++){
        bool available = ((( 1 << (w-1)) & mask) == 0) ? 0 : 1 ;//very deep point here
        // bool available = (( 1 << (w-1)) & mask == 0) ? 0 : 1 ;//this get take long time to execute
        if(available && c[i][w] == 1){
            ans = ((ans%mod) + (f(i+1 , mask ^ (1<<(w-1)) , n , c))%mod)%mod;
        }
    }
    return dp[i][mask] = ans;
}
int main(){
    int n;
    cin >> n;
    vector<vector<int>> c(n+1 , vector<int>(n+1));
    memset(dp , -1 , sizeof(dp));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin>>c[i][j];
        }
    }
    cout<<f(1 , (1<<n)-1 , n , c);
    return 0;
}