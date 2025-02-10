#include<iostream>//this concept is pass by reference
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(){//a=97 z==122
    string s;
    cin>>s;
    int b=0;
    int i=0;
    char a=s[0];
   while(i<s.size()-1){
    int j=i+1;
     while(j<s.size()){
        if(int(a)>int(s[j])){
            a=s[j];
            b=j;
        }
        j++;
     }
            char temp=s[i];
            s[i]=s[b];
            s[b]=temp;
            a=s[i+1];
            i++;
            b=i;
        
     
   }
   cout<<s;
}
 