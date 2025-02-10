#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4};
    cout<<&a[0]<<endl;
    cout<<&a[1]<<endl;
    cout<<&a[2]<<endl;
    cout<<&a[3]<<endl;
}
//this how memory allocation actually work
//0x61ff00
//0x61ff04
//0x61ff08
//0x61ff0c