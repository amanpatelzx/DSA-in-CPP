#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,5,4,5,6,7,8,9,3};
    int sum=0;
    int n=9;
    for(int i=0;i<10;i++){
        sum+=arr[i];
    }
    int s=n*(n+1)/2;
    cout<<sum-s<<endl;
    // cout<<sum<<endl;
    // cout<<s<<endl;
}