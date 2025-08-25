#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
    set<int> s1;
    set<string> s2;
    map<int,int> m1;
    map<string,int> m2;

    s1.insert(5);
    s1.insert(1);
    s1.insert(3);
    s1.insert(4);
    //isme insert ->T.C ->O(log(n));
    //isme assecting order me print hote hai , and baki sab same hai
    for(int ele : s1) cout<<ele<<" ";
    cout<<endl;

   
    s2.insert("Aman");
    s2.insert("Prakash");
    s2.insert("Aditya");
    s2.insert("Vinay");
    s2.insert("Mintu");
 //element here arrange in alphabetical order;
    for(auto ele : s2) cout<<ele<<" ";
    cout<<endl;

// this is just same as in map;
    m1[2]=45;
    m1[4]=98;
    m1[1]=12;
    m1[8]=67;
    m1[5]=0;

    for(auto ele : m1) cout<<ele.first<<" ";
    cout<<endl;

    m2["Aman"]=0;
    m2["Prakash"]=1;
    m2["Mintu"]=3;
    m2["Aditya"]=4;
    m2["Vinay"]=6;
//yaha bhi first pe depend karega, how it should print
    for(auto ele : m2) cout<<ele.first<<" ";
    cout<<endl;
    for(auto ele : m2) cout<<ele.second<<" ";
    cout<<endl;
   
}