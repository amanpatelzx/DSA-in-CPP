#include<iostream>//just remember this method
#include<string>//its obious to forget it
#include<vector> 
#include<sstream>
using namespace std;
int main(){
    int a=0,b,m=0,n=0;
   string s;
   string temp;
   getline(cin,s);
   stringstream ss(s);
   vector<string> v;
   vector<int> v1;
   vector<int> v2;
   while(ss>>temp){
    v.push_back(temp);
   }
   for(int i=0;i<v.size();i++){
    for(int j=i+1;j<v.size();j++){
         if(v[j]==" ") continue;
        else if(v[i]==v[j]){
            v[j]=" ";
            a++;
            b=i;
        }
    }
       
        if(a>=1){
            if(m<=a){
                v1.push_back(m);
                v2.push_back(b);
                m=a;         
            }
   }
        a=0;
}
        for(int i=0;i<v1.size();i++){
            if(v1[i]==m){
           cout<<v[v2[i]]<< " --> "<<m+1<<" ";
           cout<<endl;
            }
    }
 }
