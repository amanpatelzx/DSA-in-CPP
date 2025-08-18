#include<iostream>//Print index of a given element in an array. If not present, print -1.
#include<vector>
using namespace std;
void fun(vector<int>&v,int n){
    if(n==0) return;
    cout<<v[v.size()-n]<<" -> "<<v.size()-n<<endl;
    fun(v,n-1);
}
int main(){
   vector<int>v={1,2,3,4,5,6,7,8,9};
   int n=v.size();
   if(n==0) cout<<-1;
   else fun(v,n);
}   