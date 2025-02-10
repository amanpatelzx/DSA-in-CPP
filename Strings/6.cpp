#include<iostream>//vovel count
#include<string>
using namespace std;
int main(){
int a=0,b=0;
string s;
cout<<"Enter the word : ";
cin>>s;
cout<<s;
for(int i=0;s[i]!='\0';i++){
    if(s[i]=='a'||s[i]=='i'||s[i]=='e'||s[i]=='o'||s[i]=='u'||s[i]=='A '||s[i]=='I'||s[i]=='E'||s[i]=='O'||s[i]=='U') a++;
    else b++;
}
cout<<"Total count of vovel is : "<<a<<"\n";
cout<<"Total count of letter is : "<<a+b;

}
