#include<iostream>//this is normal short by me.
#include<climits>
using namespace std;
int main(){
    // int arr[]={3,1,5,4,14,8,25,9};
    int arr[]={5,4,3,2,1};
     for(int i=0;i<sizeof(arr)/4;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<sizeof(arr)/4;i++){
    int a=INT_MAX,b;
    for(int j=i;j<sizeof(arr)/4;j++){
        if(arr[j]<a) {
            a=arr[j];
            b=j;
        }
    }
       int temp=arr[i];
           arr[i]=a;
           arr[b]=temp;
    }
    for(int i=0;i<sizeof(arr)/4;i++){
        cout<<arr[i]<<" ";
    }
}