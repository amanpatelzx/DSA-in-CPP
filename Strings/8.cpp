#include<iostream>//IN BUILT FUNCTION
// #include<string>//s.size() so ye \0 ko count nahi karta
using namespace std;
int main(){
string s;
// cin>>s;
cout<<s<<endl;
s.push_back('a');
s.push_back('b');
s.push_back('c');
cout<<s<<endl;
cout<<endl;
s.pop_back();
cout<<s<<endl;

}
