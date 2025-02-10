#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x,z;
    cout<<"Enter the no. of Element you want to give \n";
    cin>>x;
    
    vector<int>v;
    for(int i=0;i<x;i++){
        int y;
        cin>>y;
        v.push_back(y);
    
    }
    cout<<"WHich no. of last index you want to know\n";
    cin>>z;
    int b;
    for(int i=x-1;i>=0;i--){
        if(v[i]==z) {b=i;
        break;
        }
    }
        cout<<"Your required index is "<<b;
    




}




