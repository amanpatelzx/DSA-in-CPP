#include<iostream>
#include<vector>
using namespace std;
void permutation(string s,string ans,int n,int a,vector<string>&fans){
    if(a==n){
        fans.push_back(ans);
        // cout<<ans<<" ";
        return; 
    }
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        string sd=s.substr(0,i)+s.substr(i+1,n-1-a);
    permutation(sd,ans+ch,n,a+1,fans);
    }
}
int main(){
    int n,k;
    string str;
    vector<string>fans;
    cout<<"Enter the no. n and k -> ";
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        str+=to_string(i);
    }
    permutation(str,"",n,0,fans);
    cout<<endl;
    // cout<<"The required answer is -> "<<fans[k-1];
    for(int i=0;i<fans.size();i++){
        cout<<fans[i]<<" ; ";
    }
}