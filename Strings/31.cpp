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
   vector<int>v1;
   for(int i=0;i<x;i++){
    cin>>b;
    v[i]=b;
   }
   for(int i=0;i<x;i++){
   int x=stoi(v[i]);
    v1.push_back(x);
   }
   y=v1[0];
   for(int i=1;i<x;i++){
    if(y<v1[i]){
        y=v1[i];
        c=i;
    }
   }
   cout<<"Greatest no. index is  : "<<c;
 }
