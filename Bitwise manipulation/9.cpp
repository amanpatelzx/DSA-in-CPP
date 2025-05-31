#include<iostream>
//Calculate the minimum number of 
//bit flips to convert from one number to another.
using namespace std;
int main(){
    int a = 23;
    int b = 32;
    cout<< __builtin_popcount(a^b);
}
