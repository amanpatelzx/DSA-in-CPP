#include<iostream>//just remember this method
#include<string>//its obious to forget it
#include<vector> 
#include<sstream>
using namespace std;
int main(){
    int x,y,c=0;
    cout<<"Enter the no. of element : ";
    cin>>x;
   string s,b;
   vector<string>v(x);
   for(int i=0;i<x;i++){
    cin>>b;
    v[i]=b;
   }
   vector<string>v1;
   vector<string>v2;
   vector<string>v3;
   for(int i=0;i<x;i++){
   s=v[i];
   for(int j=0;j<s.size();j++){//here t(1,s[j]) means 1 represent how much type char s[j] should repeat
        string t(1,s[j]);
        v1.push_back(t);
        if(i==0) v2.push_back(t);
        if(i==x-2) v3.push_back(t);
    }
        v1.push_back(" ");
   }

  int a=0,d=0,m=0;;
   for(int k=0;k<v2.size();k++){
   for(int i=v2.size();i<v1.size()-1;i++){
    if(v1[i]!=" ") continue;
    else if(v2[k]!=v1[i+1+k]){
        d++;
    break;
    }
    else a++;
   }
   if(d==1) break;
   if(a==x-1) m++;
   a=0;
   }
   if(m>0){
        cout<<"Your requeired result is : ";
   for(int i=0;i<m;i++){
   cout<<v2[i];
   }
   }
   else cout<<"gg";
 }
