#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;//take input from user in vector;
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(3);
    v.push_back(1);
    v.push_back(2);
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    
    }   
}
    

   
    

        


    
 