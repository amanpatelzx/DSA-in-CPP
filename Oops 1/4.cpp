#include<iostream>
using namespace std;
class calculator{
public:
int a;
int b;
void add(){
    cout<<a+b<<endl;
}
void sub(){
    cout<<a-b<<endl;
}
void mul(){
    cout<<a*b<<endl;
}
void div(){
    cout<<a/b<<endl;
}
};

int main(){
    calculator calci;
    calci.a=5;
    calci.b=3;
    calci.add();
    calci.sub();
    calci.mul();
    calci.div();
}