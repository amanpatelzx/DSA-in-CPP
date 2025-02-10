#include<iostream>//IN BUILT FUNCTION
#include<string>
#include<algorithm>// so ye \0 ko count nahi karta
using namespace std;
int main(){
string s;
string t;
cin>>s;
t=s;
cout<<s<<endl;
reverse(s.begin(),s.end());
cout<<s<<endl;//important noted down
s=t;
reverse(s.begin()+1,s.end()-2);
cout<<s<<endl;//important noted down
s=t;
reverse(s.begin()+1,s.begin()+4);

cout<<s<<endl;//important noted down
}
