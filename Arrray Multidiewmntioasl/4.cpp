#include<iostream>
using namespace std;
int main(){
    int x,y,a;
    cout<<"Rows and column : ";
    cin>>x>>y;
    int arr[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>a;
            arr[i][j]=a;
        }
    }
    cout<<endl;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int k=0;k<x;k++)
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
         if(arr[k][i]>arr[i][j]){
            int temp=arr[k][i];
            arr[k][i]=arr[i][j];
            arr[i][j]=temp;
         } 
        }
    }

    cout<<endl;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}