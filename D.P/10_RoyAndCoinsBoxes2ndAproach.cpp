#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> f(n+10,0);
    int m;
    cin>>m;
    for(int i=0; i<m ; i++){//this way most efficent by previous solution 
        int l , r;//keep in mind this way , may use in another such problem;
        cin>>l>>r;
        f[l]++;
        f[r+1]--;
    }
    for(int i= 1 ; i<f.size(); i++){
        f[i] = f[i] + f[i-1] ;
    }
    vector<int> c(n+10,0);
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