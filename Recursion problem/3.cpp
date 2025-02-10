#include<iostream>
using namespace std;//understand this way solving
int main(){
    string str;
    string a;
    cout<<"Enter the string str : ";
    getline(cin,str);
    cout<<"Enter the char u want to removed str : ";
    cin>>a;
    cout<<str<<endl;
    cout<<str.substr(5,2)<<endl;
    cout<<str.substr(1)<<endl;
    cout<<str.substr(2)<<endl;
    cout<<str.substr(3)<<endl;
    cout<<str.substr(0,1)<<endl;
}