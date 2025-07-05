#include<iostream>
using namespace std;
class A{
    public:
    virtual void call(){//once run this without virtual
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
    //compiler pov -> A type ka hai
    //runtime time pov -> B type ka hai
    B b;
    A *a;
    a=&b;
    A c;

    a->call(); 
    
}
//understant this concept
