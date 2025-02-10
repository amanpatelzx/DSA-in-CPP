#include<iostream>
using namespace std;
    int x;
void fun(int n){
    if(n==0) return;
    fun(n-1);//call
    cout<<n<<" ";//kam
}
int main(){
    cout<<"Enter the no.-> ";
    cin>>x;
    fun(x);
}
