#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    //in this unordered set element are get arrange in that order where
    // T.C of insertion is O(1);
    // T.C of search is O(1);
    // T.C of delete is O(1);
    cout<<s.size()<<endl;
    
    //if you dublicate the element then its size will be same;
    s.insert(3);
    s.insert(4);
    s.insert(5);
    // eg.
   cout<<s.size()<<endl;

//erase function
    s.erase(2);
    cout<<s.size()<<endl;

    //does element present or not

    int target=1;
    //this is syntax understand the meaning of it;
    if(s.find(target)!=s.end()) cout<<"Exist"<<endl;
    else cout<<"Does Not Exist"<<endl;

    for(int ele : s){//this how you can print all element in that given data structure;
        cout<<ele<<" ";
    }
    cout<<endl;
    // if(s.find(4)!=s.end()) cout<<"Yes Exist";
    // else cout<<"Does't exist";
}