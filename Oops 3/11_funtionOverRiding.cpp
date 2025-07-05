#include<iostream>
using namespace std;
class A{
    public:
    void call(){
        cout<<"Mai A ka hu\n";
    }
};
class B : public A{
    public:
    void call(){
        cout<<"Bhai mai B , A ko override kar diya\n";
    }
};
int main(){
    A a;
    a.call();
    B b;
    b.call();//this is overriding , if u dont write anything in call funtion in B
    b.A::call();//then A ka call print hoga
}
//understant this concept
