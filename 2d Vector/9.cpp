#include<iostream>
#include<vector>
using namespace std;
void change(vector<vector<int>>&v){
    v[0][0]=100;
}
int main(){
    int a;
    cout<<"Enter there row and colomn :";
    vector<vector<int>>v;
    for(int i=0;i<100000;i++){
        v(i);
        for(int j=0;j<10000;j++){
            cin>>a
            if(a==111) break;
            if(a==1111) break;
            v[i].push_back(a);
        }
            if(a==1111) break;
        cout<<endl;
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    }
