#include<iostream>//this is selection sorting,
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
    int a=INT_MAX;
    int b;
    for(int j=i;j<n;j++){
        if(a>arr[j]){
             a=arr[j];
             b=j;
        }
    }
       int temp=arr[i];
           arr[i]=a;
           arr[b]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}