#include<iostream>
using namespace std;
string removed(string s,string dd,string d,int a){
if(a==s.size()) return d;
if(s[a]!=dd[0]) d+=s[a];
return removed(s,dd,d,a+1);
}
int main(){
    string str;
    string a;
    cout<<"Enter the string str : ";
    getline(cin,str);
    cout<<"Enter the char u want to removed str : ";
    cin>>a;
    cout<<str<<endl;
    cout<<removed(str,a,"",0);
}