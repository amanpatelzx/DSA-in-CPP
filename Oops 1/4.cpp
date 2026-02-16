#include<iostream>
using namespace std;
class calculator{
public:
int a;
int b;
calculator(int a , int b){
    this->a = a;
    this->b = b;
}
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
    calculator calci(5 , 6);
    // calci.a=5;
    // calci.b=3;
    calci.add();
    calci.sub();
    calci.mul();
    calci.div();
    cout<<endl;
}