#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[6]={3,5,4,2,7,6};
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    stack<int> st;
    int brr[6];
    brr[0]=-1;
    for(int i=0;i<6;i++){
        brr[i]=-1;
       while(st.size()!=0 && st.top()<=arr[i]) st.pop();
       if(st.size()!=0) brr[i]=st.top();
       st.push(arr[i]);
    }
    cout<<endl;
    for(int i=0;i<6;i++){
        cout<<brr[i]<<" ";
    }
}