#include<iostream>//Print all the elements of an array in reverse order.
#include<vector>
using namespace std;
void fun(vector<int>&v){
    if(v.size()==0) return;
    cout<<v[v.size()-1]<<" ";
    v.pop_back();
    fun(v);
}
int main(){
   vector<int>v={1,2,3,4,5,6,7,8,9};
   fun(v);
}