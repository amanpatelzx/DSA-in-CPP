#include<iostream>
#include<vector>
using namespace std;
void subset(string ans,string s,int a,vector<string>&v1,bool flag){
    if(a==s.size()){  
      v1.push_back(ans);
      return;
    }
    if(a==s.size()-1){
      if(flag==true)subset(ans+s[a],s,a+1,v1,true);
      subset(ans,s,a+1,v1,true);
    return;
    }
    if(s[a]==s[a+1]){
     if(flag==true) subset(ans+s[a],s,a+1,v1,true);
    subset(ans,s,a+1,v1,false);
    }
    else if(flag==true) subset(ans+s[a],s,a+1,v1,true);
    subset(ans,s,a+1,v1,true);
}
int main(){
    string s;
    vector<string>v;
    cout<<"Enter the string : ";
    cin>>s;
    subset("",s,0,v,true);
   // for(int i=0;i<v.size();i++){
   //    cout<<v[i]<<endl;
   // }
   for(string e:v){//remember this way;
      cout<<e<<endl;
   }
}
