#include<iostream>//multiplication of matrix
using namespace std;
int main(){
    int x,y,z,a=0,b=0,c=0;
    cout<<"Rows and column : ";
    cin>>x>>y;
    int arr[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   
    cout<<endl;
    for(int i=0;i<x;i++){
        for(int j=0;j<y/2;j++){
           if((i+1)%2==0){
            int temp=arr[i][j];
            arr[i][j]=arr[i][y-1-j];
            arr[i][y-1-j]=temp;
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