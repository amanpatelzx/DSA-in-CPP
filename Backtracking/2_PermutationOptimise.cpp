#include<iostream>
#include<vector>
using namespace std;
void f(string &s , int idx){
    if(idx == s.size() - 1){
        cout<<s<<" ";
        return ;
    }
    for(int i = idx ; i < s.size(); i++){
        swap(s[i] , s[idx]);
        f(s , idx+1);
        swap(s[i] , s[idx]);//this is called BackTracking
    }
}
int main(){
    string s = "abc";
    f(s , 0);
}