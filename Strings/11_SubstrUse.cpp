#include<iostream>//concept of sub string
#include<string>
#include<algorithm>// so ye \0 ko count nahi karta
using namespace std;
int main(){
string s;
cin>>s;
cout<<s<<endl;
//(index,lenght)
cout<<s.substr(1,3)<<endl;
cout<<s.substr(2,4);
}
