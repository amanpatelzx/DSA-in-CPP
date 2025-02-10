#include<iostream>
using namespace std;
int o(int a){
   cin>>a;
   while(a!=0){
    int c=a%10;
    cout<<c<<" ";
    a=a/10;
   }
}
int main(){
    int x,r;
    cout<<"Enter how much no. ypu give as input\n";
    cin>>r;
    cout<<"Now Enter all no.\n";
    for(int i=1;i<=r;i++){
      cin>>x;
      
      
    }
    o(x);
    
    }
