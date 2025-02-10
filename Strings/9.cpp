#include<iostream>//IN BUILT FUNCTION
#include<string>//s.size() so ye \0 ko count nahi karta
using namespace std;
int main(){
string s;
cin>>s;
cout<<s<<endl;
string t;
cin>>t;
s=s+t;//here we can add string 
cout<<s<<endl;//important noted down
s=s+"Good";
cout<<s<<endl;//important noted down
s="Good"+s;
cout<<s<<endl;//important noted down
}
