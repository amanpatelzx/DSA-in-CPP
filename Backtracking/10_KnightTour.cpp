#include<iostream>
#include<vector>
using namespace std;
int NoOfWays = 0;
void display(vector<vector<int>>&dp , int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<dp[i][j]<<" " ;
        }
        cout<<endl;
    }
    cout<<endl;
}
bool ifPossible(int i , int j , int n , vector<vector<int>> &dp){
    if( i >= n || i < 0 || j >= n || j < 0) return false;
    if(dp[i][j] != -1) return false;
    return true;
}
void f(int i, int j, int n, int count , vector<vector<int>> &dp){
    if(count == n*n - 1){
        dp[i][j] = count;
        // display(dp , n);
        dp[i][j] = -1;
        NoOfWays ++;
        return;
    }
    vector<int> dx = {-2 , -2 , -1 , -1, 1 , 1, 2 , 2};
    vector<int> dy = {-1 , 1 , -2 , 2 , -2 , 2 ,-1 ,1};
    for(int a = 0; a < 8 ; a++){
        if(ifPossible(i + dx[a], j + dy[a], n , dp)){
            dp[i][j] = count;
            f(i+dx[a] , j+dy[a] , n , count+1 , dp);
            dp[i][j] = -1;
        }
    }
}
int main(){
    int i = 0;
    int j = 0;
    int n = 6;
    vector<vector<int>> dp( n ,vector<int>(n , -1));
    f( i , j , n , 0 , dp);
    cout<< NoOfWays << " -> No. of Possible combination";
}