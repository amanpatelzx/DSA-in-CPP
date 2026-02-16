#include<iostream>//Diamond problem , most asked in interview
using namespace std;
class A{
    public:
    int a_ka_public;
    A(){
        cout<<"A ka coonstructor hai bhai\n";
    }
};
class B : virtual public A{
    public:
    int b_ka_public;
    B(){
        cout<<"B ka coonstructor hai bhai\n";
    }
    
};
class C : virtual public A{//by using virtual A ka ek hi bar call ho rha hai;
    public:
    int c_ka_public;
    C(){
        cout<<"C ka coonstructor hai bhai\n";
    }
};
class D : public B,public C{ 
    public:
    int d_ka_public;
     D(){
        cout<<"D ka coonstructor hai bhai\n";
    }
    
};
int main(){
    D d;
    d.b_ka_public=5;

}
