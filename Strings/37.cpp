#include<iostream>//just remember this method
#include<string>//its obious to forget it
#include<vector> 
#include<sstream>
#include<algorithm>
using namespace std;
int main(){
    int m=0;
   string s,t,a="";
   cout<<"Enter two string s and t : ";
   cin>>s>>t;
   string b=t;
        a=a+t[0];
        b[0]=s[0];
    if(s.size()!=t.size()) cout<<"False";
    else {
    for(int i=0; i<s.size();i++){
    for(int j=i+1;j<s.size();j++){
    if(b[i]==b[j] ){
        for(int k=i;k<a.size();k++){
            if(b[j]==a[k]){
                break;
                m++;
            }
        }
        b[j]=s[i+1];
    }
        m=0;
        if(m==1) break;
        else{
            if(j==s.size()-1){
        a+=b[i+1];
        for(int k=0;k<b.size();k++){
            cout<<b[k]<<" ";
        }
        cout<<endl;
        }
        }
   
   }
   cout<<endl;
   }

   }
   if(s==b) cout<<"True";
   else cout<<"False";
   for(int k=0;k<a.size();k++){
            cout<<a[k]<<" ";
        }
 }
