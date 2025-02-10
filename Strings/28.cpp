#include<iostream>//just remember this method
#include<string>//its obious to forget it
#include<vector> 
#include<sstream>
using namespace std;
int main(){
    int a=0,b;
   string s;
   string temp;
   getline(cin,s);
   stringstream ss(s);
   vector<string> v;
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
        cout<<v[b]<< " --> "<<a+1<<" ";
        cout<<endl;
        }
        a=0;
   }
//    for(int i=0;i<v.size();i++){
//        cout<<v[i]<<" ";
//     }

}