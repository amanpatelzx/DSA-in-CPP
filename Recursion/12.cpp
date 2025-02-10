#include<iostream>//a^b calculate
using namespace std;
    int a,b;
int fun(int a,int b){
    if(b==0) return 1;
    return a*fun(a,b-1);
    
}
int main(){
    cout<<"Enter the no.-> ";
    cin>>a;
    cout<<"Enter the no.-> ";
    cin>>b;
    cout<<fun(a,b);
}
