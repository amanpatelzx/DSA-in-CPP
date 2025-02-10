#include<iostream>
#include<cmath>
using namespace std;
void hanoi(int n,char a,char b,char c){
    if(n==0) return;
    hanoi(n-1,a,c,b);
    cout<<a<<"->"<<c<<endl;
    hanoi(n-1,b,a,c);
}
int main(){
    int n;
    cout<<"Enter the no. : ";
    cin>>n;
    hanoi(n,'A','B','C');
    cout<<"Total no. of combination is : "<<pow(2,n)-1;
}