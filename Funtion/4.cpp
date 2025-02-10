#include<iostream>
using namespace std; // // this sign means just commentating it will not impact any coading things
int x(int a, int b, int c){
    if(a>b and b>c){
        cout<< a;
    }
    else if (b>c and c>a){
        cout<< b;
    }
    else {
        cout<< c;
    }
    
} 
int main(){
    int a,b,c;
    cout<<"Enter three no. as a,b,c to find greatest of them\n";
    cin>>a>>b>>c;
    x(a,b,c);
}
