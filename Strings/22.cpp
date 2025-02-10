#include<iostream>//anagram of any no.;
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(){//a=97 z==122
    int a=1,b,m,n=0;
    string s;
    cout<<"Enter 1st word : "; 
    cin>>s;
    cout<<endl;
    vector<int> v;
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1]){
            a++;
        }
        else {
            v.push_back(a);
            a=1;
        }
    }
        m=v[0];
        n=v[0];
        for(int i=1;i<v.size();i++){
            if(m<v[i]){
                m=v[i];
                n=n+m;
            }
        }
    
    cout<<"Most repeating letter "<<s[n-1]<<" is : "<<m;
}

 