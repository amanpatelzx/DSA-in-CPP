#include<iostream>
#include<vector>
using namespace std;
int f3(vector<int> &arr, vector<int> &brr, int i, int j){//this best version of it  
    if (i == arr.size() || j == brr.size()) return 0;//this one of lcs
    if (arr[i] == brr[j]) return 1 + f3(arr, brr, i+1, j+1);
    else return max(f3(arr, brr, i+1, j), f3(arr, brr, i, j+1));
}

int f2(vector<int> &arr, vector<int> &brr , int i , int j){//this is my way of doing 
    if(i >= arr.size() || j >= brr.size()) return 0;//which is not optimise
    int ans = 0;
    for(int k = i; k < arr.size() ; k++ ){
        int l = j;
        for(int t = j; t < brr.size() ; t++){
            if(brr[t] == arr[k]){
                l = t;
                ans = max ( ans , 1 + f2( arr , brr , k+1 , l+1));
                break;
            }
        }
    }
    return ans;
}
int f4( string s1, string s2){//this one more optimise lcs
        int m = s1.size(), n = s2.size();
        vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
        for(int i = m - 1 ; i >=0 ; i--){
            for(int j = n-1; j>=0 ; j--){
                if(s1[i] == s2[j]) dp[i][j] = 1 + dp[i+1][j+1];
                else dp[i][j] = max( dp[i+1][j], dp[i][j+1]);
            }
        }
        return dp[0][0];
    }
int f(vector<int> &arr, vector<int> &brr, int i, int j , int k , vector<vector<vector<int>>> &dp){//accual problem
    if (i == arr.size() || j == brr.size()) return 0;
    if ( dp[i][j][k] != -1) return dp[i][j][k];
    if (arr[i] == brr[j]) return  dp[i][j][k] = 1 + f(arr, brr, i+1, j+1 , k ,dp);
    else if( k > 0) {
        return dp[i][j][k] = max ( 1 + f( arr , brr, i+1 , j+1 , k-1 , dp) , 
        max(f(arr, brr, i+1, j , k , dp), f(arr, brr, i, j+1 , k , dp))) ;
    }
    else return dp[i][j][k] = max(f(arr, brr, i+1, j , k , dp), f(arr, brr, i, j+1 , k , dp));
}
int main(){
    int m, n , k;
    cin>>n>>m>>k;
    vector<int> arr(n);
    vector<int> brr(m);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < m; i++){
        cin>>brr[i];
    }
    vector<vector<vector<int>>> dp( n+2 , vector<vector<int>> (m +2 , vector<int> ( k+2 ,-1)));
    cout<<f( arr , brr , 0 , 0 , k , dp);
}