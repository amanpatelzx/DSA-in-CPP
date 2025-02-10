#include<iostream>//adding element
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
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
        a=a+arr[i][j];
        }
    }
    cout<<"The sum of all element is : "<<a;
}