#include<iostream>
#include<string>
using namespace std;
void binary(string ans,int n,int a){
    if(a==n){
        cout<<ans<<" ";
        return;
    }
    binary(ans+'0',n,a+1);
    if(ans[a]!='1' && ans[a-1]!='1') binary(ans+'1',n,a+1);
}
int main(){
    int n;
    cout<<"Enter the no. -> ";
    cin>>n;
    binary("",n,0);
    // binary("0",n,0);
}