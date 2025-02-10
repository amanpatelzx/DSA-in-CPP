#include<iostream>
#include<string>
using namespace std;
void binary(string ans,int n){
    if(ans.size()==n){
        cout<<ans<<" ";
        return;
    }
    binary(ans+'0',n);
    if(ans=="" || ans[ans.length()-1]=='0') binary(ans+'1',n);
}
int main(){
    int n;
    cout<<"Enter the no. -> ";
    cin>>n;
    binary("",n);
}