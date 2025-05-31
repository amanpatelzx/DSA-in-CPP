#include<iostream>//prifix multiply;
#include<vector>//
#include<climits>
using namespace std;
int bestClosingTime(string customers) {
    int n=customers.size();
    vector<int>pri(n+1,0);
    vector<int>suf(n+1,0);
    for(int i=1;i<=n;i++){
        if(customers[i-1]=='N') pri[i]=pri[i-1]+1;
        else  pri[i]=pri[i-1];
    }
    for(int i=n-1;i>=0;i--){
        if(customers[i]=='Y') suf[i]=1+suf[i+1];
        else suf[i]=suf[i+1];
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