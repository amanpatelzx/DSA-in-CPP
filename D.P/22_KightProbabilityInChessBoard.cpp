#include<iostream>
#include<vector>
using namespace std;
    double f(int n, int k , int i, int j , vector<vector<vector<double>>> &dp){
        if(i<0 or i >= n or j < 0 or j >=n ) return 0;
        if( k==0 ) return 1;
        if(dp[i][j][k] != -1) return dp[i][j][k];
        double ans = 0.00;
        ans += f(n , k - 1 , i - 2, j - 1, dp) * 0.125;
        ans += f(n , k - 1 , i - 2, j + 1, dp)* 0.125;
        ans += f(n , k - 1 , i - 1, j - 2, dp)* 0.125;
        ans += f(n , k - 1 , i - 1, j + 2, dp)* 0.125;
        ans += f(n , k - 1 , i + 1, j - 2, dp)* 0.125;
        ans += f(n , k - 1 , i + 1, j + 2, dp)* 0.125;
        ans += f(n , k - 1 , i + 2, j - 1, dp)* 0.125;
        ans += f(n , k - 1 , i + 2, j + 1, dp)* 0.125;
        
         return dp[i][j][k] = ans;
        
    }
int main(){
    int n = 8, k = 10 , row = 3, column = 2;
    vector<vector<vector<double>>> dp(30,vector<vector<double>>(30,vector<double> (105, -1)));
    cout << f(n,k,row,column, dp);
}