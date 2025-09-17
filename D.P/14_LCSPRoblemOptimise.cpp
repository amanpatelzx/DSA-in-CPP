#include<iostream>
#include<vector>
// #include<cmath>
#include<algorithm>
using namespace std;
int main(){
    int n, m, K;
    cin >> n >> m >> K;
    vector<int> arr(n), brr(m);
    for(int i=0; i<n; i++) cin >> arr[i];
    for(int j=0; j<m; j++) cin >> brr[j];

    // dp[i][j][k] = answer for arr[i..], brr[j..] with k modifications
    vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(m+1, vector<int>(K+1, 0)));

    for(int i=n-1; i>=0; i--){
        for(int j=m-1; j>=0; j--){
            for(int k=0; k<=K; k++){
                if(arr[i] == brr[j]){
                    dp[i][j][k] = 1 + dp[i+1][j+1][k];
                }
                else{
                    int option1 = 0;
                    if(k > 0) option1 = 1 + dp[i+1][j+1][k-1]; // modify
                    int option2 = dp[i+1][j][k]; // skip arr[i]
                    int option3 = dp[i][j+1][k]; // skip brr[j]
                    dp[i][j][k] = max({option1, option2, option3});
                }
            }
        }
    }
    cout << dp[0][0][K] << "\n";
}
