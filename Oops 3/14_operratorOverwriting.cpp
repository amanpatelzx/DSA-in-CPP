#include<iostream>
using namespace std;
class complexNO{
    public:
    int real;
    int imaginary;
    complexNO operator + (complexNO &c1){
        complexNO c3;
        c3.real=this->real+c1.real;
        c3.imaginary=this->imaginary+c1.imaginary;
        return c3;
    }
    complexNO operator - (complexNO &c1){
        complexNO c3;
        c3.real=this->real-c1.real;
        c3.imaginary=this->imaginary-c1.imaginary;
        return c3;
    }
};
int main(){
    complexNO c1,c2,c3,c4;
    c1.real=3;
    c1.imaginary=4;
    c2.real=5;
    c2.imaginary=7;

    c3=c1+c2;
    c4=c2-c1;
    cout<<"Real : "<<c3.real<<" , Imginary : "<<c3.imaginary<<endl;
    cout<<"Real : "<<c4.real<<" , Imginary : "<<c4.imaginary;
}

//understand how this code even working