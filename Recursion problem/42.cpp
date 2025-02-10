#include<iostream>
#include<vector>
using namespace std;
void countAndSay(string s,int x,int a){
    string ans;
    if(a==x-1){
        cout<<s;
        return;
    }
    for(int i=0;i<s.size();i++){
    int sum=48;
        if(i>0 and s[i]==s[i-1]) continue;
    for(int j=i;j<s.size();j++){
        if(s[j]==s[i]) sum++;
        else break;
    } 
    char d=char(sum);
    ans+=d;
    ans+=s[i];
    }
    s=ans;
    countAndSay(s,x,a+1);
}
int main(){
    int x;
    cout<<"Enter the no. -> ";
    cin>>x;
countAndSay("1",x,0);
}
