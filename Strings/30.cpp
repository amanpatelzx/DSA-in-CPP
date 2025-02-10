#include<iostream>//just remember this method
#include<string>//its obious to forget it
#include<vector> 
#include<sstream>
using namespace std;
int main(){
   string s;
   cin>>s;
   int x=stoi(s);
   //to learn stoi = string to integer >>its full form
   cout<<x;
   cout<<endl;
   cout<<x+1;
   cout<<endl;
   cout<<x+5;
   cout<<endl;
   cout<<x*2;
   cout<<endl;
   cout<<x/2;
   string d=to_string(x);
   //this is use to convert int into string
   cout<<endl;
   cout<<d;

   
 }
