#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter side of square : ";
    cin>>n;

    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            if(i%2==0){
             cout<<(char)(j+64)<<" ";
            }
             else{ 
                cout<<j<< " ";
             
            }
        
        }
        cout<<endl;
       
        
    }


        
    }

 