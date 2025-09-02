#include <bits/stdc++.h>
using namespace std;

int f2(vector<int> &arr) {
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int len = 2; len < n; len++) {
        for (int i = 0; i + len - 1 < n; i++) {
            int j = i + len - 1;
            dp[i][j] = INT_MAX;
            for (int k = i + 1; k < j; k++) {   // ✅ fix: k < j
                dp[i][j] = min(dp[i][j],
                               dp[i][k] + dp[k][j] + arr[i] * arr[j] * arr[k]);
            }
        }
    }
    return dp[0][n - 1];
}

int main() {
    vector<int> arr = {40, 20, 30, 10, 30};
    cout << f2(arr);
}
