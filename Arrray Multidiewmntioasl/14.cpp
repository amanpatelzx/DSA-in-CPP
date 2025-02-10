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
    cout<<"Enter the coloum of second mantrix : ";
    cin>>z;
    int brr[y][z];
    for(int i=0;i<y;i++){
        for(int j=0;j<z;j++){
            cin>>brr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<y;i++){
        for(int j=0;j<z;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    int crr[x][z];
    for(int i=0;i<x;i++){
        for(int k=0;k<z;k++){
        for(int j=0;j<y;j++){
        b=b+arr[k-a+c][j]*brr[j][k];
        }
        crr[i][k]=b;
        b=0;
    a++;
    }                                   
    c++;
    a=0;
    }
    cout<<endl;
    for(int i=0;i<x;i++){
        for(int j=0;j<z;j++){
            cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}