#include<iostream>
#include<vector>
//Given an integer array nums, in which exactly two elements appear only once and all the other elements
// appear exactly twice. Find the two elements that appear only once
using namespace std;
//XOR is a comutative -->  imporatant
int main(){
    vector<int> v = {1,4,2,3,2,3,4,1,7,7,12};
    int res = 0;
    for( int i = 0; i < v.size(); i ++ ){
        res = res ^ v[i];
    }
    cout<<res;
}
