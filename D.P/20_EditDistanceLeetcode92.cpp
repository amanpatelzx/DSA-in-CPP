#include<iostream>
#include<vector>
using namespace std;
    // int f( string &s1, string &s2, int i, int j , vector<vector<int>> &dp){
    //     if( i == s1.size() && j == s2.size()) return 0;
    //     if( i == s1.size() && j != s2.size()) return s2.size() - j;
    //     if( i != s1.size() && j == s2.size()) return s1.size() - i;
    //     if( dp[i][j] != -1) return dp[i][j];
    //     int c;
    //     int a = 1 + f ( s1 , s2 , i , j + 1 , dp);
    //     int b = 1 + f ( s1 , s2, i+1 , j, dp);
    //     if(s1[i] == s2[j]){
    //         c = 0 + f ( s1, s2 , i+1 , j+1, dp);
    //     }
    //     else{
    //         c = 1 + f ( s1, s2, i+1, j+1, dp);
    //     } 
        
    //     return dp[i][j] = min( a , min( b , c));

    // }
    int f(string s1 , string s2){
        int m = s1.size();
        int n = s2.size();
        vector<vector<int>> dp(m+1 , vector<int>( n+1 , 0));

        dp[m][n] = 0;
        for(int i = 0; i<n ; i++){
            dp[m][i] = n - i;
        }
        for(int i = 0; i<m ; i++){
            dp[i][n] = m - i;
        }
        for(int i = m-1; i>=0 ; i--){
            for(int j = n-1; j>=0 ; j--){
                int c;
                int a = 1 + dp[i][j+1];
                int b = 1 + dp[i+1][j] ;
                if(s1[i] == s2[j]){
                    c = 0 + dp[i+1][j+1] ;
                }
                else{
                    c = 1 + dp[i+1][j+1];
                } 
                dp[i][j] = min( a , min( b , c));
            }
        }
        return dp[0][0];
    }
int main(){
    string word1 = "abac";
    string word2 = "cab";
    
     cout << f( word1 , word2);
    
}