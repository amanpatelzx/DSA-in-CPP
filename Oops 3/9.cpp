#include<iostream>//Diamond problem ,
using namespace std;
class A{
    public:
    int a_ka_public;
    A(){
        cout<<"A ka coonstructor hai bhai\n";
    }
};
class B : public A{
    public:
    int b_ka_public;
    B(){
        cout<<"B ka coonstructor hai bhai\n";
    }
    
};
class C : public A{
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
//in result you will get A repeated two time 
//one for B and one for C for D calling 
//to fixed this see in next code