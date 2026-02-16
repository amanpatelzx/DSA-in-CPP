class Solution {
public:
    // vector<vector<vector<int>>> dp;//this giviing MLE;
    //and without dp its giving TLE;
    // int f(int n , int copy , int idx , int step){
    //     if(idx > n) return 1e9;
    //     if(idx == n) return 0;
    //     if(step > n) return 1e9;
    //     if(dp[idx][copy][step] != -1) return dp[idx][copy][step];
    //     return dp[idx][copy][step] = min( 1 + f(n , idx , idx, step + 1) , 1 + f(n , copy , idx + copy , step + 1));
    // }
    int f(int n){
        for(int i = 2; i <= sqrt(n); i++){
            if( n % i == 0) return n / i;
        }
        return 1;
    }
    int minSteps(int n) {
        // dp.resize( n + 5 , vector<vector<int>>(2*n ,vector<int>( n + 4 , -1)));
        // return f(n , 0 , 1 , 0);
        int result = 0;
        int val = n;
        while(val > 1){
            int largestDivisior = f(val);
            // cout<<largestDivisior<<" ";
            result += val / largestDivisior;
            val = largestDivisior;
        }
        return result;
    }
};