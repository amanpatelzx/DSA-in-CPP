#include<iostream>//find odd no. between
using namespace std; 
int odd(int a,int b){
    if((b-a)<=1) {
        if(b%2!=0) return 0;
        else return a;
    }
    if(a%2==0){a=a+1;
    cout<<a<<" ";
    return a-1+odd(a,b);
    }
    else { a+=2;
    cout<<a<<" ";
    return a-2+odd(a,b);
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<odd(a,b)-a;
}
