#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Rows and column : ";
    cin>>x>>y;
    int arr[x][y];
    
    for(int i=0;i<x*y;i++){
        for(int i=0;i<x*y;i++){
        arr[x][y]={}
    }
    }

    arr[3][3]={{1,2,3},{5,4,3},{7,2,9}};
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}