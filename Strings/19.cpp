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
    for(int i=0;i<s.size();i++){
        a+=int(s[i]);
    }
    for(int j=0;j<t.size();j++){
        b+=int(s[j]);
    }
     if(a==b) cout<<"Yes , these are anagram ";
     else cout<<"No , these are not anagram ";

}//this method not work for every condition
 