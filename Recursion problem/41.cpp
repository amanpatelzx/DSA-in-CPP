#include<iostream>//this solution my effort
#include<vector>
#include<cmath>
using namespace std;
int fun(int n, int k) {
        if(n==1) return 0;
        if(k%2==0){
            int a=fun(n-1,k/2);
            if(a==0) return 1;
            else return 0;
        }
        else return fun(n-1,k/2+1);
    }
int main(){
    int n,k;
    cout<<"Enter n and k -> ";
    cin>>n>>k;
    cout<<fun(n,k);
}
