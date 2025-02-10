#include<iostream>//anagram of any no.;
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(){//a=97 z==122
    int a=1,b=0,c=0,d=0;
    string s;
    cout<<"Enter 1st word : "; 
    cin>>s;
    cout<<endl;
    sort(s.begin(),s.end());
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i+1]){
            a++;
            c=i;
        }
        if(a>b){
           b=a;
           d=c;
           a=1;
        }
    }
    cout<<"Most repeating letter "<<s[d]<<" is : "<<b;
}
 