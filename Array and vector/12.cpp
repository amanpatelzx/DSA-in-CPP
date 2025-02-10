#include<iostream>
#include<vector>
using namespace std;
void a(vector<int>a){
    
    a[0]=100;//learn the syntax
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }

}
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(6);
    v.push_back(3);

    v.push_back(9);
    v.push_back(2);
    v.push_back(0);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    a(v);
    
    
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}
