#include<iostream>//merge two sorted array inbto one
#include<vector>
using namespace std;
void merge(vector<int>&arr,vector<int>&brr,vector<int>&ans){
    int i=0,j=0,k=0;
    while(i<arr.size() and j<brr.size()){
        if(arr[i]<=brr[j]){
            ans[k]=arr[i];
            k++;
            i++;
        }
        else {
            ans[k]=brr[j];
            k++;
            j++;
    } 
    }
        if(i==arr.size() and j!=brr.size()){
            while(k<ans.size()){
            ans[k]=brr[j];
            k++;
            j++;
            }
        }
        else if(j==brr.size() and i<arr.size()){
            while(k<ans.size()){
            ans[k]=arr[i];
            k++;
            i++;
            }
        }
}
int main(){
    int a[]={1,5,7,9};
    int n1=sizeof(a)/4;
    vector<int> arr(a,a+n1);
    int b[]={2,3,4};
    int n2=sizeof(b)/4;
    vector<int> brr(b,b+n2);
    for(int i=0;i<n1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n2;i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;
    cout<<arr.size()<<" "<<brr.size();
    cout<<endl;
    vector<int> ans(n1+n2);
    merge(arr,brr,ans);
    cout<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
