#include<iostream>
#include<vector>
//Given an integer array where every element occurs twice 
//except one occurs only once. Find that unique element.
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
