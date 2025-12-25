#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
void f(string &s , int idx){
    if(idx == s.size() - 1){
        cout<<s<<" ";
        return ;
    }
    unordered_set<char> m;
    for(int i = idx ; i < s.size(); i++){
        if(m.find(s[i]) != m.end()) continue;//stop repeatative work
        m.insert(s[i]);
        swap(s[i] , s[idx]);
        f(s , idx+1);
        swap(s[i] , s[idx]);//this is called BackTracking
    }
}
int main(){
    string s = "aba";
    f(s , 0);
}