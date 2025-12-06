# include<iostream>
#include<vector>
using namespace std;// leetcode = 1326
    // int f( int i , int maxEnd , vector<vector<int>> &dp , vector<pair<int,int>> &p ,int n){
    //     if( maxEnd >= n ) return 0;
    //     if( i == p.size() ) return 50000;
    //     if( dp[i][maxEnd] != -1) return dp[i][maxEnd];
    //     int notTake = f(i+1 , maxEnd ,dp ,p,n);
    //     int take = 50000;
    //     if(p[i].first <= maxEnd){
    //         take = 1 + f(i+1 , max( maxEnd , p[i].second) ,dp ,p,n);
    //     }
    //     return dp[i][maxEnd] = min(take , notTake );
    // }
   int f(int n, vector<int>& ranges){//this one is greedy approch
        vector<int>r(n+1 , 0);
        for(int i = 0 ; i<=n ; i++){
            int start = max( 0 , i - ranges[i]);
            int end = min ( n , i + ranges[i]);
            r[start]  = max( r[start] , end);
        }
        int taps = 0;
        int maxEnd = 0;
        int currEnd = 0;
    
        for(int i=0; i<=n; i++){
            if( i > maxEnd) return -1;
            if( i > currEnd){
                taps++;
                currEnd = maxEnd;
            }
            maxEnd = max(maxEnd , r[i]);
        }
        return taps;
    }
int main(){
    int n = 4;
    vector<int> ranges = { 2 , 1 , 4 , 2, 3};
        // vector<pair<int,int>> p;
        // for(int i = 0; i <= n ; i++){
        //     pair<int,int> p1;
        //     p1.first = max(0 , i - ranges[i]);
        //     p1.second = min(n , i + ranges[i]);
        //     p.push_back(p1);
        // }
        // sort(p.begin() , p.end());

        // vector<vector<int>> dp(n+3, vector<int>(n+3,-1));
        // int ans = f( 0 , 0 , dp , p , n);
        // if( ans == 50000 ) return -1;
        // else return ans;
        cout<< f( n , ranges);
}