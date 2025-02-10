#include<iostream>//Transpose of aaray in single 
using namespace std;
int main(){
    int x,y,a=0;
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
    for(int i=0;i<x;i++){
        for(int j=i;j<y;j++){
            int temp=arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=temp;
        }
    }
    cout<<endl;
    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }
}
