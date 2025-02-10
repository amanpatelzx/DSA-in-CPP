#include<iostream>
using namespace std;//just do ratta 
int main(){
    int x,y;
    cout<<"Enter two no.\n";
    cin>>x>>y;
    int* p1=&x;
    int* p2=&y;
    cout<<"The Product is "<<(*p1)*(*p2);

}