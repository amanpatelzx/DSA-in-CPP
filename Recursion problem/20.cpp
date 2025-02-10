#include<iostream>
using namespace std;
bool pakindromess(string s,string ans,int a){
    if(a==s.size()/2){
        if(ans==s.substr(0,s.size()/2)) return true;
        else return false;
    }
    char ch=s[s.size()-1-a];
    return pakindromess(s,ans+ch,a+1);
}
int main(){
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    cout<<pakindromess(s,"",0);
}