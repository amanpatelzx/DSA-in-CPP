#include<iostream>//this is more optimise way
#include<vector>//to print the factor of any no.
#include<cmath>//understant this and learn this 
#include<cmath>
using namespace std;
vector<int> fact(int n){
    vector<int> v;
    for(int i=1;i<=sqrt(n);i++) if(n%i==0) v.push_back(i);
    return v;
}
int main(){
    int a=100;
    vector<int> v=fact(a);
    vector<int> v1=v;
    int n=v.size();
    if(v[n-1]*v[n-1]==a) n--;//this important->when a is complete sqaure then fator will repeate that why do this
    for(int i=0;i<n;i++)  v1.push_back(a/v[n-1-i]);
    cout<<endl;
    for(int i=0;i<v1.size();i++)  cout<<v1[i]<<" , ";
}