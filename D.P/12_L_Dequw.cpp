#include<iostream>
#include<vector>
using namespace std;
long long f(vector<long long> &arr, long long i , long long j , vector<vector<long long>> &dp){

    if( i == j ) return arr[i];
    if(dp[i][j] != -1) return dp[i][j];
    return dp[i][j] = max( arr[i] - f(arr , i+1 , j ,dp ) , arr[j] - f( arr , i , j-1 ,dp));
}
long long fbu( vector<long long> & arr){//keep in mind this 
    int n = arr.size();
    vector<vector<long long>> dp( n + 4 , vector<long long>( n + 4 , 0));
    
    //base case
    for( int i = 0 ; i < n ; i++){
        dp[i][i] = arr[i];
    }
     
    for ( int len = 2 ; len <= n ; len++){
        for( int i = 0 ; i <= n - len ; i++){
            int j = i + len - 1;
            dp[i][j] = max( arr[i] - dp[i+1][j] , arr[j] - dp[i][j-1]);
        }
    }
    return dp[0][n-1];
}
int main(){
    long long n;
    cin>>n;
    vector<long long> arr(n);
    for(long long i = 0; i<n ;i++){
        cin>>arr[i];
    }
    // vector<vector<long long>> dp( n + 4 , vector<long long>( n + 4 , -1));
    // cout<<f( arr , 0 , n-1 , dp);
    cout<<fbu(arr);
} 