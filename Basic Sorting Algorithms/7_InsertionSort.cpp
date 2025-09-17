#include<iostream>//this is insertion sorting,
#include<climits>//this is complete .
using namespace std;
int main(){
    // int arr[]={3,1,5,4,14,8,25,9};
    int arr[]={5,0,1,2,0,6,4,2,0,8,0,0,6};
    int n=sizeof(arr)/4;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<n;i++){
        int j=i;
    while(j>=1 and arr[j]<arr[j-1]){
            int temp=arr[j];
           arr[j]=arr[j-1];
           arr[j-1]=temp;
        j--;
    }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}