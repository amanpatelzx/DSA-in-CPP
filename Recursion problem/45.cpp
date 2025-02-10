#include<iostream>
using namespace std;
string permutation(string s,string ans,int k){
        int n=s.size();
        if(n==0) return ans;
        int fact=1;
        for(int i=1;i<n;i++){
            fact*=i;
        }
        int idx=k/fact;
        if(k%fact==0) idx--;
        char ch=s[idx];
        string l=s.substr(0,idx);
        string r=s.substr(idx+1);
        int v=1;
        if(k%fact==0) v=fact;
        else v=k%fact;
        return permutation(l+r,ans+ch,v);
    }
int main(){
    int n,k;
    string str;
    cout<<"Enter the no. n and k -> ";
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        str+=to_string(i);
    }
    cout<<permutation(str,"",k);
}