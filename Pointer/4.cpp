#include<iostream>
using namespace std;//just do ratta 
int main(){
    int x,y;
    cout<<"Enter two no.\n";
    cin>>x>>y;
    int* p1=&x,b=y;
    cout<<"The Product is "<<(*p1)*(b);

}