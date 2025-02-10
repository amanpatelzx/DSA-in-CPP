#include<iostream>
using namespace std;//permutataion preinting
void permutation(string s,string ans){
    if(s==""){//under stand this way
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.length();i++){
        ans=ans+s[i];//we can write like this understand this
        string d=s.substr(0,i);
        string e=s.substr(i+1);
    permutation(d+e,ans);
    // permutation(d+e,ans+s[i]);this will work but not above
    }
}
int main(){
    string str;
    cout<<"Enter your string : ";
    cin>>str;
    permutation(str,"");
}
    