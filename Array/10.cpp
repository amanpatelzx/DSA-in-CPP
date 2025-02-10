#include<iostream>
#include<climits>// we use this becouse of INT_MIN usage;
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
    int c=INT_MIN;// we can use c=INT_MIN 
    for(int i=1;i<x;i++){//this means ever lowest value eg -ifinite,
        c=max(c,a[i]);
        }
        cout<<"Maximum no. of all of them is "<<c;
        
           
    
    
}