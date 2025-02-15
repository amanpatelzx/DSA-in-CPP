#include<iostream>//revesre sorting;
#include<vector>//great; learn this way good
using namespace std;
void merge(vector<int>&arr,vector<int>&brr,vector<int>&ans){
    int i=0,j=0,k=0;
    while(i<arr.size() and j<brr.size()){
        if(arr[i]<=brr[j]) ans[k++]=brr[j++];
        else ans[k++]=arr[i++];
    }
        while(i<arr.size()) ans[k++]=arr[i++];
        while(j<brr.size()) ans[k++]=brr[j++];
}
void sort(vector<int>&d){
    if(d.size()==1)return;
    int n1=d.size()/2;
    int n2=d.size()-d.size()/2;
    vector<int>arr(n1);
    vector<int>brr(n2);
    for(int i=0;i<n1;i++) arr[i]=d[i]; 
    for(int i=0;i<n2;i++) brr[i]=d[n1+i];
    sort(arr);
    sort(brr);
    merge(arr,brr,d);
    arr.clear();//this is use to delete extra space when that is not in use
    brr.clear();//means when we use of thst vector and thats not gonna come again then delete it 
}
int main(){
    int a[]={5,4,45,-1,5,-34,2,1};
    int n1=sizeof(a)/sizeof(a[0]);
    vector<int> arr(a,a+n1);
    for(int i=0;i<n1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
