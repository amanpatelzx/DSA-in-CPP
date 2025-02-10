// Q4. Given an array of integers, print a sum triangle using recursion from it such that the first level has
// all array elements. After that, at each level the number of elements is one less than the previous
// level and elements at the level will be the sum of consecutive two elements in the previous level.
// So, if sample input is [5, 4, 3, 2, 1], sample output will be:
// [5, 4, 3, 2, 1]
// [9, 7, 5, 3]
// [16, 12, 8]
// [28, 20]
// [48]
#include<iostream>
#include<vector>
using namespace std;

void sumtriaangle(vector<int>&v,int sum){
    vector<int>ans;
    if(v.size()==1){
    cout<<v[0]<<endl;
    cout<<"The sum of all element in triangle is -> "<<sum+v[0];
    return;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        sum+=v[i];
    }
    cout<<endl;
    for(int i=0;i<v.size()-1;i++){
        int a=v[i]+v[i+1];
        ans.push_back(a);
    }
    v=ans;
    sumtriaangle(v,sum);
} 

int main(){
    vector<int>v={5,4,3,2,1};
    sumtriaangle(v,0);
}
