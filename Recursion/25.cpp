#include<iostream>
using namespace std;
void zig(int a){
    if(a==0) return;
    cout<<a;
    zig(a-1);
    cout<<a;
    zig(a-1);
    cout<<a;
}
int main(){
    int a;
    cout<<"Enter the no. -> ";
    cin>>a;
    zig(a);
}