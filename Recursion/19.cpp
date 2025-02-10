#include<iostream>//stiar problem
using namespace std; 
int st(int a){
    if(a==2) return 2;
    if(a==1) return 1;
    return st(a-1)+st(a-2);
}
int main(){
    int a;
    cout<<"Enter no of stairs : ";
    cin>>a;
    cout<<st(a);
}
