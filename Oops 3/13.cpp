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
    virtual void call(){
        cout<<"Bhai mai B , A ko override kar diya\n";
    }
};
int main(){
    B b;
    A *a;
    a=&b;
    A c;
    cout<<sizeof(c)<<endl;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(*a)<<endl;
    cout<<sizeof(b);
}
//when we remove virtual from B then its size is 1 else 4, understand why this is happeing 
//this is very highly asked in interview
//understant this concept


//understand about abract funtion , i haven't understand it so good ,
//get it by chatgpt;
