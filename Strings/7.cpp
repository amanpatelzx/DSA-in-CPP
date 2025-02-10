#include<iostream>//updating of letter
#include<string>
using namespace std;
int main(){
char a,b;
string s;
cout<<"Enter the word or sentence: ";
getline(cin,s);
cout<<"Enter the letter that you want to change : ";
cin>>a;
cout<<"Enter the letter that at place of you want to change : ";
cin>>b;
cout<<s;
cout<<endl;
for(int i=0;i<s.size();i++){
    if(s[i]==char(a)) s[i]=char(b);
}
cout<<s;

}
 