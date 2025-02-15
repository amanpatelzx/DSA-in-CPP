#include<iostream>//here we need to print as it index if element,
#include<climits>
using namespace std;
int main(){
    int arr[]={3,1,5,4,14,8,25,9};
    // int arr[]={5,0,1,2,0,6,4,2,0,8,0,0,6};
    int n=sizeof(arr)/4;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
    int a=INT_MAX;
    int b;
    for(int j=0;j<n;j++){
        if(arr[j]<i) continue;
        if(a>arr[j]){
             a=arr[j];
             b=j;
        }
    }
     arr[b]=i;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}