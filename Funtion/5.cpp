#include<iostream>
using namespace  std;
int main(){
    int a=15;
    int *p=&a;
    // int b=++(*p);// this pre increment ,this wil 1st update p then to b
    int b=(*p)++;// this post increment ,this wil 1st update b then to p
    cout<<a<<" "<<b;





    }
