#include<iostream>
using namespace std;
void print(){
    int a = 10;
    cout<< a << endl;
    a++;
}
void print1(){
    static int a = 10;
    cout<< a << endl;
    a++;
}

int main(){
    print();
    print();
    print();
    cout<<endl;
    print1();
    print1();
    print1();
}
//understand about static and normal things 
//aise hi static object se lekar staic funtion tak hote hai