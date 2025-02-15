#include<iostream>//this is insertion sorting,
#include<climits>//but this is not complete
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
        // bool flag=true;
    for(int j=0;j<=i;j++){
        if(arr[i]<arr[j]){
            int temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
        //    flag=false;
        }
    }
    //    if(flag==true) break;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}