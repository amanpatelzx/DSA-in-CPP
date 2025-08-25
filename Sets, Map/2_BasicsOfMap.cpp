#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    pair<string,int> p1;
    p1.first="Aman Patel";
    p1.second=8;

    pair<string,int> p2;
    p2.first="Akash Kuamr";
    p2.second=6;

    pair<string,int> p3;
    p3.first="Prakash Kumar";
    p3.second=45;
// map always recive pair, not like this m.insert(Aman,0)-> this way is wroung in c++
    m.insert(p1);
    m.insert(p2);
    m.insert(p3);

    cout<<"Size is -> "<<m.size()<<endl;
    //Now more shortcut
    m["Satya"]=50;
    m["Adtiya"]=1;
    cout<<"Size is -> "<<m.size()<<endl;
    //you can insialise map like this;
    
    for(pair<string,int> p : m) cout<<p.first<<" , "<<p.second<<endl;
    //Agar kuch erase karna hua to;
    m.erase("Prakash Kumar");
    cout<<endl;
    cout<<"Size is -> "<<m.size()<<endl;
    cout<<endl;
    //yaha auto bhi likh sakte ho, oo apne aap dekh lega
    for(auto p : m) cout<<p.first<<" , "<<p.second<<endl;

    //to find key , key means unordered_map<key,val> agar kuch aaisa hai to 
    if(m.find("Satya")!=m.end()) cout<<"Exist"<<endl;
    else cout<<"Don't Exist"<<endl;
    if(m.find("Hello")!=m.end()) cout<<"Exist"<<endl;
    else cout<<"Don't Exist"<<endl;
}