#include<iostream>
using namespace std;
void subset(string ans,string s){
    if(s.size()==0){  
      cout<<ans<<" , ";
      return;
    }
    subset(ans+s.substr(0,1),s.substr(1));
    subset(ans,s.substr(1));
}
int main(){
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    subset("",s);
} 