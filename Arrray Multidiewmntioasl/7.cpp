#include<iostream>//adding to matrix
using namespace std;
int a=0;//here this void function work only in consatANT

void print(int arr[3][3]){
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
}
int main(){
    cout<<"Rows and column : ";
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    print(arr);
    cout<<endl;
    int brr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            brr[i][j]=arr[i][j];
        }
    }
    cout<<endl;
    print(brr);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        arr[i][j]=arr[i][j] +brr[i][j];
        }
    }
    cout<<endl;
    print(arr);
    
}