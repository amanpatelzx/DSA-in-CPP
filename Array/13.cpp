#include<iostream>
using namespace std;
int x;
 
void  a1 (int a[]){
    for(int i=0; i<x; i++){
      cout<<a[i]<<" ";
    }
}
  void  a2(int a[]){ 
    // for(int i=1; i<=x; i++){
      // cout<<a[i]<<" ";
      a[0]=100;
      // cout<<endl;
    }


int main()
{
     
    cout<<"Enter the no of element\n";
    cin>>x;
    int a[x];
    // int b[x];
    cout<<"Enter the element\n";
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    a1(a); cout<<endl;//here a1(a) only send the adrees of array not the value
    //here address of a,a[0] are same as we have studied earlier
    a2(a);
    a1(a); cout<<endl;// we can solve this question like this
  
     
    
 }