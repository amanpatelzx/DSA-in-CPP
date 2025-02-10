#include<iostream>
#include<climits>// we use this becouse of INT_MIN usage;
using namespace std;
int main(){
    int x;
    cout<<"Enter the no of element\n";
    cin>>x;
    int a[x];
    int b[x];
    cout<<"Enter the element\n";
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    int d=INT_MAX;// we can use c=INT_MIN 
    for(int j=0;j<x; j++){
        for(int i=0;i<x;i++){
        
        d=min(d,a[i]);
        if(d==a[i]){
            continue;
            b[i]=d;
        
        }


    }
    }
        cout<<"Number are arrenged in accesnging order ";
        for(int j=0;j<x; j++){
            cout<<b[j]<<",";
        }


        
           
    
    
}