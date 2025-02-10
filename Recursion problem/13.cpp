#include<iostream>
#include<vector>
using namespace std;
void function(vector<int>&v,int a,int b,vector<int>v1){
    if(b==a){
        for(int i;v1.size();i++){
            v1[i];
        }
        cout<<endl;
        return;
    }
    function(v,a,b+1,v1);
}
int main(){
    vector<int>v={1,2,3,4,5,6};
    vector<int>v1;
    int a=3;
    function(v,a,0,v1);

}