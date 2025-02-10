#include<iostream>
using namespace std;
void subset(string ans,string s,int a){
    if(a==s.size()){  
      cout<<ans<<" , ";
      return;
    }
    subset(ans+s[a],s,a+1);
    subset(ans,s,a+1);
}
int main(){
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    subset("",s,0);
}