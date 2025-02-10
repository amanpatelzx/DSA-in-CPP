#include<iostream>//rotate it by 90 anti clockwiase
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


    for(int i=0;i<x/2;i++){
        for(int j=0;j<y;j++){
            int temp= brr[i][j];
        brr[i][j]=brr[y-1-i][j];
         brr[y-1-i][j]=temp;
        }
    }
    cout<<endl; for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}