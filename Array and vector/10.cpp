#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"Enter the no.\n";
    vector<int>v;
    for(int i=0;i<5;i++){//this is also a way to take input from user;
        int x;
        cin>>x;
        v.push_back(x);

    }
    cout<<endl;
    for(int i=0;i<5;i++){
    cout<<v[i]<<" ";
    }
    

   
    

        
}

    
 