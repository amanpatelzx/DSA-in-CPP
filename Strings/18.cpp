#include<iostream>//this concept is pass by reference
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(){//a=97 z==122
    string s;
    cin>>s;
    int b=0,d=0;
    int i=0;
    char a=s[0];
    char c=s[0];
   while(i<s.size()/2+1){
    int j=i+1;
     while(j<s.size()){
        if(int(a)>int(s[j])){
            a=s[j];
            b=j;
        }
        if(int(c)<int(s[j])){
            c=s[j];
            d=j;
        }
        j++;
     }
            char temp=s[i];
            s[i]=s[b];
            s[b]=temp;
            a=s[i+1];
            char temp1=s[s.size()-i];
            s[s.size()-i]=s[c];
            s[c]=temp1;
            a=s[i+1];
            c=s[i+1];
            i++;
            b=i;
        
     
   }
   cout<<s;
}
 