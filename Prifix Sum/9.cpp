#include<iostream>//learned this way
#include<vector>//
#include<climits>
using namespace std;
int bestClosingTime(string customers) {
    int n=customers.size();
    vector<int>pri(n+1,0);
    vector<int>suf(n+1,0);
    for(int i=1;i<=n;i++){
        pri[i]=pri[i-1]+((customers[i-1]=='N') ? 1 : 0);
    }
    for(int i=n-1;i>=0;i--){
        suf[i]=suf[i+1]+((customers[i]=='Y') ? 1 : 0);
    }
    int a=INT_MAX, idx=-1;
    for(int i=0;i<=n;i++){
        int res=pri[i]+suf[i];
       if(res<a) {
        a=res;
        idx=i;
       }
    }
    return idx;
}
int main(){
    // string customers="YNYNY"; 
    string customers="YYNNNNNNYYYN"; 
    cout<<bestClosingTime(customers);
} 