#include<iostream>
using namespace std;
int main(){
    string s="AZYZXBDJKX";
    cout<<s<<endl;
    string ans;
    for(int i=0;i<s.size();i++){
        if(s[i]>='X'){
            ans.push_back(s[i]);
        }
    }
    cout<<ans<<endl;
    for(int i=0;i<ans.size()-1;i++){
        bool flag=true;
        for(int j=0;j<ans.size()-1-i;j++){
            if(ans[j]>ans[j+1]){
              char temp=ans[j];
              ans[j]=ans[j+1];
              ans[j+1]=temp;
              flag=false;
            }
        }
        if(flag==true) break;
    }
    cout<<ans<<endl;
    }

    
 