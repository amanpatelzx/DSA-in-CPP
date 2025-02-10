#include<iostream>
using namespace std;
int main(){
    int x,y,a;
    cout<<"Rows and column : ";
    cin>>x>>y;
    int arr[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>arr[i][j];
        }
    }
    a=arr[0][0];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
         if(a<arr[i][j]) a=arr[i][j];
        }
    }
    cout<<"The greatest no is : "<<a;
}