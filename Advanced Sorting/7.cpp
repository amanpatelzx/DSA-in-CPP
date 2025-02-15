#include<iostream>//inversion count//very important concept ,kepp in mind
#include<vector>//optimise way
using namespace std;
int ss(vector<int>&a,vector<int>&b){
    int i=0,j=0,c=0;
    while(i<a.size() and j<b.size()){
        if(a[i]>b[j]){
            c+=a.size()-i;
            j++;
        }
        else i++;
    }
    return c;
}
void merge(vector<int>&a,vector<int>&b,vector<int>&arr){
    int i=0,j=0,k=0;
    while(i<a.size() and j<b.size()){
        if(a[i]<=b[j]) arr[k++]=a[i++];
        else arr[k++]=b[j++];
    }
    while(i<a.size()) arr[k++]=a[i++];
    while(j<b.size()) arr[k++]=b[j++];
}
int inversion(vector<int>&arr){
    int ans=0;
    if(arr.size()==1){
        return 0;
    }
    int n=arr.size();
    int n1=n/2,n2=n-n/2;
    vector<int>a(n1);
    vector<int>b(n2);
    for(int i=0;i<n1;i++){
        a[i]=arr[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[i+n1];
    }
    ans+=inversion(a);
    ans+=inversion(b);
    ans+=ss(a,b);
    merge(a,b,arr);
    a.clear();
    b.clear();
    return ans;
}
int main(){
    vector<int> arr={5,1,8,2,3};
    cout<<inversion(arr);
    return 0;
}