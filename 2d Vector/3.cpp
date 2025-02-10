#include<iostream>
#include<vector>
using namespace std;
void change(vector<vector<int>>&v){
    v[0][0]=100;
}
int main(){
    vector<int>v1(5,2);
    //thiss means to insitlisinbg vector of size 5 with each elemnt 2
    // change(v);
    // cout<<v[0][0]<<" , ";
    cout<<v1[2];

    }
