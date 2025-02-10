#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the no of element\n";
    cin>>x;
    int a[x];
    cout<<"Enter the element\n";
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    int c=a[0];
    for(int i=1;i<x;i++){
        c=max(c,a[i]);
        }
        int d=0;
    for(int i=0;i<x;i++){
        if(c==a[i]) {continue;
        }
        d=max(d,a[i]);
 
        }
    //  int d=a[0];
    // for(int i=1;i<x;i++){
    //     d=max(c,a[i]);
    //     }
        cout<<"second maximum no. of all of them is "<<d;

    
        
           
    
    
}