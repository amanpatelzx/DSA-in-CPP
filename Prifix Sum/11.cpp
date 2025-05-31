#include<iostream>//leetcode 1402
#include<vector>//hard
#include<algorithm>
#include<climits>
using namespace std;
int maxSatisfaction(vector<int>& satisfaction) {
    int n=satisfaction.size();
    sort(satisfaction.begin(),satisfaction.end());
    int suf[n];//this is also a way to create vector #important
    suf[n-1]=satisfaction[n-1];
    for(int i=n-2;i>=0;i--){
        suf[i]=satisfaction[i]+suf[i+1];
    }
    int idx=0;
    for(int i=n-1;i>=0;i--){
        if(suf[i]<0){
            idx=i+1;
            break;
        }
    }
    int ans=0,a=1;
for(int i=idx;i<n;i++){
    ans+=satisfaction[i]*a;
    a++;
}
    return ans;
}
int main(){
    vector<int> satisfaction={-1,-8,0,5,-9};
    cout<<maxSatisfaction(satisfaction);
} 