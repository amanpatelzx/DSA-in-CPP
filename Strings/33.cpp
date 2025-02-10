#include<iostream>//just remember this method
#include<string>//its obious to forget it
#include<vector> 
#include<sstream>
using namespace std;
int main(){
    int x,y,c=0;
    cout<<"Enter the no. of element : ";
    cin>>x;
   string s,b;
   vector<string>v(x);
   for(int i=0;i<x;i++){
    cin>>b;
    v[i]=b;
   }
   vector<string>v1;
   vector<vector<string>>f;
   for(int i=0;i<x;i++){
   s=v[i];
   for(int j=0;j<s.size();j++){//here t(1,s[j]) means 1 represent how much type char s[j] should repeat
        string t(1,s[j]);
        v1.push_back(t);
    }
    f.push_back(v1);
    for(int j=0;j<s.size();j++){//here t(1,s[j]) means 1 represent how much type char s[j] should repeat
        v1.pop_back();
    }
   }
   for(int i=0;i<x;i++){
    for(int j=0;j<f[i].size();j++){
        cout<<f[i][j]<<" ";
    }
    cout<<endl;
   }
   int a=0,d=0;
    for(int j=0;j<f[0].size();j++){
    for(int i=1;i<x;i++){
        if(f[0][j]!=f[j][i]){
            d++;
            break;
        }
        else if(f[0][j]==f[x-1][j] && i==x-1) a++;
        // else a++;
    }
    if(d==1) break;
   }
   for(int i=0;i<a;i++){
    cout<<f[0][i];
   }
//    for(int i=0;i<v1.size();i++){
//     cout<<v1[i]<<" ";
//    }
//     cout<<endl;
//     cout<<v1.size();
//    for(int i=0;i<v2.size();i++){
//     cout<<v2[i]<<" ";
//    }
//     cout<<endl;
//     cout<<v2.size();
//   int a=0,d=0;
//    for(int k=0;k<v2.size();k++){
//    for(int i=v2.size();i<v1.size();i++){
//     if(v1[i]!=" ") continue;
//     else if(v2[k+a]!=v1[i+1+a]){
//         d++;
//         break;
//     }
//     else {
//      a++;
//     }
//    if(d==1) break;
//    }
//    }
//     cout<<"Your requeired result is : ";
//    for(int i=0;i<=a;i++){
//     if(v2[i]!=v3[i]) break;
//     else cout<<v2[i];
//    }
 }
