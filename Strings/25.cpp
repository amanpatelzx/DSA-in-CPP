#include<iostream>//this is more efficient
#include<string>//to find most frequecy of letter
#include<vector>
#include<algorithm>  
using namespace std;
int main(){
   string s;
   getline(cin,s);
  vector<int>v(26,0);
  int m=0;
  for(int i=0;i<s.length();i++){
      int a=int(s[i]);
      (v[a-97])++;
      if(v[a-97]>m)m=v[a-97];
  }
  for(int i=0;i<26;i++){
      if(v[i]==m){
        int n=i+97;
       cout<<char(n)<<" "<<m<<endl;
      }
  }
}