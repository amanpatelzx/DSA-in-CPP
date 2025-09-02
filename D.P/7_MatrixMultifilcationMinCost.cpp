#include<iostream>//this good problem 
#include<vector>
#include<climits>
using namespace std;
int f(vector<int>& arr , int i , int j , vector<vector<int>> &dp){
    if( i==j || i+1==j ) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int ans = INT_MAX;
    for( int k = i+1; k < j ; k++) {
        ans = min ( ans , ( f(arr , i , k , dp) + f(arr , k , j , dp) + arr[i]*arr[j]*arr[k]));
    } 
    return dp[i][j] = ans;
}
int f2(vector<int> & arr){
    int n = arr.size();
    vector<vector<int>> dp(n+3 , vector<int>(n+4, 0));

    for( int len = 2; len < n ; len++){
        for(int i = 0; i + len -1 < n ; i++){
            int j = i + len - 1;
            dp[i][j] = INT_MAX;
        for(int k = i+1; k < j; k++){
            dp[i][j] = min ( dp[i][j] , dp[i][k] + dp[k][j] + arr[i]*arr[j]*arr[k]);
        }
    }
    }
    return dp [0][n-1] ;//this wroung correct this

}
int main(){
    vector<int> arr = { 40 , 20 , 30 , 10 , 30 };
    // int n = arr.size();
    // vector<vector<int>> dp(n+3 , vector<int>(n+4, -1));
    // // cout<<f(arr , 0 , n-1 , dp);
    cout<<f2(arr);
}