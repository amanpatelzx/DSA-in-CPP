#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> f(n+1,0);
    int m;
    cin>>m;
    vector<int> L(n+1,0);
    vector<int> R(n+1,0);
    for(int i=0; i<m ; i++){
        int l , r;
        cin>>l>>r;
        L[l]++;
        R[r]++;
    }
    f[1] = L[1];
    for(int i= 2 ; i<n+1; i++){
        f[i] = L[i] - R[i-1] + f[i-1] ;
    }
    vector<int> c(n+1,0);
    for(int i = 0; i<n+1 ; i++){
        int coins = f[i];
        c[coins]++;
    }
    for(int i=c.size()-2 ;i>=0;i--){
        c[i] = c[i] + c[i+1];
    }
    int q;
    cin>>q;
    while(q--){
        int nums;
        cin>>nums;
        cout<<"Atleast "<<nums<<" = "<<c[nums]<<"\n";
    }
    return 0;
}
// 7
// 4
// 1 3
// 2 5
// 1 2
// 5 6
// 4
// 1
// 7
// 4
// 2
//these are testcase;