#include<iostream>//this sir way of solving it
#include<string>
#include<vector>
using namespace std;
void storesubset(string ans,string original,vector<string>&v,bool flag){
    if(original==""){
        v.push_back(ans);
        return;
    }
    char ch=original[0];
    if(original.length()==1){
        if(flag==true) storesubset(ans+ch,original.substr(1),v,true);
        storesubset(ans,original.substr(1),v,true);
        return;
    }
    char dh=original[1];
    if(ch==dh){
        if(flag==true) storesubset(ans+ch,original.substr(1),v,true);
        storesubset(ans,original.substr(1),v,false);
        return;
    }
    else if(flag==true) storesubset(ans+ch,original.substr(1),v,true);
        storesubset(ans,original.substr(1),v,true);
        return;
}
int main(){
    string str="aba";
    vector<string>v;
    storesubset("",str,v,true);
    for(int i=0;v.size();i++){
        cout<<v[i]<<" ";
    }
}