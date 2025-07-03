#include<iostream>//this is god wawy to praacticce 
using namespace std;// means alway use setter to set value
class calculator{//and keep your data private and funtion public
private:
int a;
int b;
public:
void seta(int x){
    a=x;
}
void setb(int y){
    b=y;
}
int add(){
    return a+b;
}

int sub(){
    return a-b;
}
int mul(){
    return a*b;
}
int div(){
    return a/b;
}
};

int main(){
    calculator calci;
    calci.seta(5);
    calci.setb(3);
    cout<<calci.add()<<endl;
    cout<<calci.sub()<<endl;
    cout<<calci.mul()<<endl;
    cout<<calci.div()<<endl;
}