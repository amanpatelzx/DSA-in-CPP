#include<iostream>
#include<cstring>//this for memset
#include<iomanip>//this for fixed and setprecision
using namespace std;

#define ld long double

ld dp[105][105][105];

ld fr(int r, int s, int p){
    if( r == 0 || s == 0) return 0.0;
    if( p == 0 ) return 1.0;
    if( dp[r][s][p] > -0.9) return dp[r][s][p];

    ld total = r*s + s*p + p*r;
    ld result = 0.0;
    result += fr( r , s - 1, p)*s*r/total;
    result += fr( r, s, p - 1)*p*s/total;
    result += fr( r-1 , s, p )*r*p/total;

    return dp[r][s][p] = result;
}
ld fs(int r, int s, int p){
    if( p == 0 || s == 0) return 0.0;
    if( r == 0 ) return 1.0;
    if( dp[r][s][p] > -0.9) return dp[r][s][p];

    ld total = r*s + s*p + p*r;
    ld result = 0.0;
    result += fs( r , s - 1, p)*s*r/total;
    result += fs( r, s, p - 1)*p*s/total;
    result += fs( r-1 , s, p )*r*p/total;

    return dp[r][s][p] = result;
}
ld fp(int r, int s, int p){
    if( p == 0 || r == 0) return 0.0;
    if( s == 0 ) return 1.0;
    if( dp[r][s][p] > -0.9) return dp[r][s][p];

    ld total = r*s + s*p + p*r;
    ld result = 0.0;
    result += fp( r , s - 1, p)*s*r/total;
    result += fp( r, s, p - 1)*p*s/total;
    result += fp( r-1 , s, p )*r*p/total;

    return dp[r][s][p] = result;
}
int main(){
    long long r, s, p;
    cin>>r>>s>>p;
    memset(dp , -1.0, sizeof dp);
    ld ans_r = fr(r, s, p);
    memset(dp , -1.0, sizeof dp);
    ld ans_s = fs(r, s, p);
    memset(dp , -1.0, sizeof dp);
    ld ans_p = fp(r, s, p);
    cout<<fixed<<setprecision(9)<<ans_r<<" "<<ans_s<<" "<<ans_p;
}