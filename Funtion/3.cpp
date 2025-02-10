#include<iostream>
using namespace std; // // this sign means just commentating it will not impact any coading things
int x(int a, int b, int c){
    if(a>b){
        return a;
    }
    else if (b>c){
        return b;
    }
    else {
        return c;
    }
    
} 
int main(){
    int a,b,c;
    cout<<"Enter three no. as a,b,c to find greatest of them\n";
    cin>>a>>b>>c;
    x(a,b,c);
}
    cin>>a>>b>>c;