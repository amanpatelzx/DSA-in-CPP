#include<iostream>
using namespace std;
class A{
  private://this can't be inheritent and access from outside 
    int a_ka_private;
  protected://this can inheritant but can't access from outside
    int a_ka_protected;
  public://this can access and inheirtent both
    int a_ka_public;
};
class B : public A{
    public:
    int b_ka_public;
    
};
class C : protected A{//here proteced before A means jo bhi A se aayega oo proctected ban jayega
    protected:
    int c_ka_protected;
    
};
class D : private A,public B{//we can make derieved it from A and B
    private:
    int d_ka_private;
    
};
int main(){
    A a;
}
//hararchy system me ham low se high security me ja sakte hai but not from high to low 