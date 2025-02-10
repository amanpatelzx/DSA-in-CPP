#include<iostream>
using namespace std;//understand this way solving
string removed(string s,string dd,string d){
if(s.size()==0) return d;
char ch=s[0];
if(ch==dd[0]) return removed(s.substr(1),dd,d);
else return removed(s.substr(1),dd,d+ch);
}
int main(){
    string str;
    string a;
    cout<<"Enter the string str : ";
    getline(cin,str);
    cout<<"Enter the char u want to removed str : ";
    cin>>a;
    cout<<str<<endl;
    cout<<removed(str,a,"");
}