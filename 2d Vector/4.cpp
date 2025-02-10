#include<iostream>
#include<vector>
using namespace std;
void change(vector<vector<int>>&v){
    v[0][0]=100;
}
int main(){
    vector<vector<int>>v(3,vector<int> (4,2));
    //this means 2d vector v is of rowss 3 and column 4 with element 2
    cout<<v[2][1];
    cout<<endl;
    cout<<v.size();//remeber this
    cout<<endl;
    cout<<v[0].size();//remember this

    }
