#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the no. of coordinate and side of Square : ";
    cin>>y>>x;
    vector<int>v(2*y);
    vector<int>v1(2*y);
    cout<<"Enter the coordinates : ";
    for(int i=0;i<2*y;i++){
        cin>>v[i];
    }
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    int se=0,so=0;
    for(int i=0;i<v1.size();i++){
        if(i%2==0){
            se+=v[i];
            v1[i]=se;
        }
        else {
            so+=v[i];
            v1[i]=so;
        }
    }
    // cout<<endl;
    // for(int i=0;i<v1.size();i++){
    //     cout<<v1[i]<<" ";
    // }
    cout<<endl;
    int sea=0;
    for(int i=2;i<v1.size();i+=2){
        sea+=2*((v1[i-2]+x-v1[i])+(v1[i-1]+x-v1[i+1]));
        }
        cout<<"Your required result is : "<<y*x*4-sea;
}