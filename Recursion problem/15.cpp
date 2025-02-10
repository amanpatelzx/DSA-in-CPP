#include<iostream>
using namespace std;//permutataion preinting
void permutation(string s,string ans){
    if(s==""){//under stand this way
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        string d=s.substr(0,i);
        string e=s.substr(i+1);
    permutation(d+e,ans+ch);
    }
}
int main(){
    string str;
    cout<<"Enter your string : ";
    cin>>str;
    permutation(str,"");
}
    