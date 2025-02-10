#include<iostream>//just an experiment for does vector changes or not
#include<vector>
using namespace std;
int main(){
    vector<int>v(5,10);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int>v1(6,12);
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    v1=v;
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    cout<<v1.size();
}