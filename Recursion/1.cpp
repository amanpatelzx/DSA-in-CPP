#include<iostream>
using namespace std;
void fun(int x){
    if(x==0) return;//base case
    cout<<"Hello Aman\n";//kam
    fun(x-1);//call
}
int main(){
    int x;
    cout<<"Enter the no.-> ";
    cin>>x;
    fun(x);
}
