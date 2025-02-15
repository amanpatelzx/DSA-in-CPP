#include<iostream>//this is bubble sorting,
#include<climits>
using namespace std;
int main(){
    // int arr[]={3,1,5,4,14,8,25,9};
    int arr[]={5,0,1,2,0,6,4,2,0,8,0,0,6};
    int n=sizeof(arr)/4;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
    bool flag=true;
    for(int j=0;j<n-i-1;j++){
        if(arr[j]==0){
       int temp=arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=temp;
        }
    }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}