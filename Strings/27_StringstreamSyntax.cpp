#include<iostream>//just remember this method
#include<string>//its obious to
#include<vector> 
#include<sstream>
using namespace std;
int main(){
   string s;
   string temp;
   getline(cin,s);
   stringstream ss(s);
   while(ss>>temp){
    cout<<temp<<endl;
   }
   
}