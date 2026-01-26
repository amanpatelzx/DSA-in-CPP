#include<iostream>
#include<cstring>
#include<climits>
#include<algorithm>
using namespace std;
    int dp[10012];
    int f(int x , int &y){
        if(x == y) return 0;
        if(x < y) return y - x; 
        if(dp[x] != -1) return dp[x];
        int a = INT_MAX , b = INT_MAX;
        int tempA = min( x%11  , (11-x%11));
        if((tempA + x) % 11 == 0) a = tempA + 1 + f((x+tempA)/11 , y);
        if((tempA - x) % 11 == 0) a = tempA + 1 + f((x-tempA)/11 , y);
        int tempB =  min( x%5  , (5-x%5));
        if((tempB + x) % 5 == 0) b = tempB+ 1 + f((x + tempB)/5 , y);
        if((tempB - x) % 5 == 0) b = tempB+ 1 + f((x - tempB)/5 , y);
        int result = x - y;
        return dp[x] = min( {a , b  , result});
    }
    int minimumOperationsToMakeEqual(int x, int y) {
        memset(dp , -1 , sizeof(dp));
        return f( x, y);
    }
    int main(){
        int x , y;
        cin>>x>>y;
        cout<<minimumOperationsToMakeEqual(x  , y);
    }