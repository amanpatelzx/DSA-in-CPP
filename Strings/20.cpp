#include<iostream>//anagram of any no.;
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(){//a=97 z==122
    int a=0,b=0;
    string s,t;
    cout<<"Enter 1st word : "; 
    cin>>s;
    cout<<"Enter 2st word : "; 
    cin>>t;
    cout<<endl;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
     if(s==t) cout<<"Yes , these are anagram ";
     else cout<<"No , these are not anagram ";

   }//this method work for every condtion
 