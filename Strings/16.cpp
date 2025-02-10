#include<iostream>//this concept is pass by reference
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(){//a=97 z==122
    string s;
    cin>>s;
    vector<int>v;
    cout<<endl;
   for(int i=0;i<s.size();i++){
     v.push_back(int(s[i]));
   }
   sort(v.begin(),v.end());
   for(int i=0;i<v.size();i++){
     cout<<char(v[i]);
   }
}
 