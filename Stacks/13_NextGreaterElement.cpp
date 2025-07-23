#include<iostream>//pop ,ans, push
#include<stack>
using namespace std;
int main(){
    int arr[10]={3,2,6,5,3,8,6,2,13,5};
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    int brr[10];
    stack<int> st;
    brr[10-1]=-1;
    for(int i=10-2;i>=0;i--){
        brr[i]=-1;
        while(st.size()!=0 and st.top()<=arr[i]) st.pop();
        if(st.size()!=0) brr[i]=st.top();
        st.push(arr[i]);
    }
    cout<<endl;
    for(int i=0;i<10;i++){
        cout<<brr[i]<<" ";
    }

}