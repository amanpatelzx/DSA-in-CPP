#include<iostream>//merge reverse sorti.ng got it bro 
#include<vector>
using namespace std;
void merge(vector<int>&arr,vector<int>&brr,vector<int>&ans){
    int i=0,j=0,k=0;
    while(i<arr.size() and j<brr.size()){
        if(arr[i]<brr[j]) ans[k++]=brr[j++];
        else ans[k++]=arr[i++];
    }
        while(i<arr.size()) ans[k++]=arr[i++];
        while(j<brr.size()) ans[k++]=brr[j++];
}
int main(){
    int a[]={9,5,4,3};
    int n1=sizeof(a)/sizeof(a[0]);
    vector<int> arr(a,a+n1);
    int b[]={8,6,2,1};
    int n2=sizeof(b)/sizeof(b[0]);
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
