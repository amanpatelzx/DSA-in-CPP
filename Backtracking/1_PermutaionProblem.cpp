#include<iostream>
#include<vector>
using namespace std;
void f(string s , string ans ){
    if(s.size() == 0){
        cout<<ans<<"  ";
        return ;
    }
    for(int i = 0; i < s.size(); i++ ){
        string left = s.substr(0 , i);
        int len = s.size()-1 - (i);
        string right = s.substr(i+1 , len);
        f(left + right , ans + s[i] );
    }
}
int main(){
    string s = "abcdefgh";
    f(s , "");
}