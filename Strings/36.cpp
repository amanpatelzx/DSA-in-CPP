#include<iostream>//just remember this method
#include<string>//its obious to forget it
#include<vector> 
#include<sstream>
#include<algorithm>
using namespace std;
int main(){
    int x,y,c=0;
    cout<<"Enter the no. of element : ";
    cin>>x;
   string b;
   vector<string>v(x);
   for(int i=0;i<x;i++){
    cin>>b;
    v[i]=b;
   }
   sort(v.begin(),v.end());
   int n=v.size();
   string first=v[0];
   string last =v[n-1];

    string ans="";
   for(int i=0;i<first.size();i++){
    if(first[i]==last[i]) ans+=first[i] ;
    else break;
   }
    cout<<"Your requeired result is : "<<ans;
 }
