#include<iostream>
#include<vector>
using namespace std;
void subset(string ans,string s,int a,vector<string>&v1){
    if(a==s.size()){  
      v1.push_back(ans);
      return;
    }
    subset(ans+s[a],s,a+1,v1);
    subset(ans,s,a+1,v1);
}
int main(){
    string s;
    vector<string>v;
    cout<<"Enter the string : ";
    cin>>s;
    subset("",s,0,v);
   // for(int i=0;i<v.size();i++){
   //    cout<<v[i]<<endl;
   // }
   for(string e:v){//remember this way;
      cout<<e<<endl;
   }
}
