#include<iostream>
#include<stack>//interview asked question
using namespace std;
int main(){
    int arr[7]={100,80,60,70,60,75,85};
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    stack<int> st;
    int brr[7];
    brr[0]=1;
    int n=0;
    for(int i=0;i<7;i++){
        brr[i]=1;
       while(st.size()!=0 && arr[st.top()]<=arr[i]) st.pop();
       if(st.size()!=0) brr[i]=i-st.top();
       st.push(i);
    }
    cout<<endl;
    for(int i=0;i<7;i++){
        cout<<brr[i]<<" ";
    }
}//easy or wot!!!!