#include<iostream>//roatate masstrix by 90 clockwise
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
    int brr[y][x];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
        brr[j][i]=arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;

    }


    for(int i=0;i<x;i++){
        for(int j=0;j<y/2;j++){
            int temp= brr[i][j];
        brr[i][j]=brr[i][y-1-j];
         brr[i][y-1-j]=temp;
        }
    }
    cout<<endl; for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}