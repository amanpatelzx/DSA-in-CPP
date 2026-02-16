#include<iostream>//funtion overloading
using namespace std;
void area(int a,int b){
    cout<<"Area of retangle is : "<<a*b<<endl;
}
void area(int a){
    cout<<"Area of square : "<<a*a<<endl;
}
void area(float a){
    cout<<"Area of circle is : "<<2*3.14*a<<endl;
}
int main(){
    area(1,2);
    area(3);
    area(float(2));
}
//here you can see , in same of funtion but different parameter