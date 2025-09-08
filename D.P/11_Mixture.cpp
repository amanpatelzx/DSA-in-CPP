#include<iostream>//this is very good problem ,understand it very deeply
#include<vector>//this is mixture problem
#include<climits>
using namespace std;
int Sum(vector<int>& colour,int start , int end){
    int ans = 0;
    for(int i = start ; i <= end ; i++){
        ans += colour[i];
    }
    return ans%100;
}
int f(vector<int> &colour ,int start , int end ,vector<vector<int>> &dp){
    if(end - start == 0) return 0;
    // if(end - start == 1) return colour[start]*colour[end];
    if(dp[start][end] != -1) return dp[start][end];
    int ans = INT_MAX;
    for(int i = start ; i < end ; i++){
        ans  = min (ans , ( f(colour , start , i ,dp) + f(colour , i+1 , end , dp) + Sum(colour,start , i)*Sum(colour , i+1 , end)));
    }
 return dp[start][end] = ans;
}
int f2(vector<int> &colour){//understans this bottomUp very deeply 
    int n = colour.size();//how this way is working
    vector<vector<int>> dp(103,vector<int> (103 , 0));
    for( int len = 2 ; len <= n ; len++){
        for(int i = 0 ; i <= n - len ; i++){
            int j = i + len -1;
            int ans = INT_MAX;
            for(int k = i ; k < j ; k++){
                ans  = min (ans , ( dp[i][k] + dp[k+1][j] + Sum(colour,i , k)*Sum(colour , k+1 , j)));
            }
            dp[i][j] = ans;
        }
    }
    return dp[0][n-1];
}
int main(){
    int n;
    while(cin>>n){
        vector<int> colour;
        int nums;
        for(int i = 0; i<n ; i++){
            cin>>nums;
           colour.push_back(nums);
        }
        // vector<vector<int>> dp(103,vector<int> (103 , -1));
        // int ans = f(colour , 0 , colour.size()-1 , dp);
        int ans = f2(colour);
        cout<<ans<<"\n";
        // dp.clear();
    }
}