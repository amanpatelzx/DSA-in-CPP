#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int> st;
void createSegmentTree(int i , int low , int high , int arr[]){
    if(low == high) {
        st[i] = arr[low];
        return;
    }
    int mid = low + (high - low) / 2;
    createSegmentTree(i*2 + 1 , low  , mid , arr);
    createSegmentTree(i*2 + 2 , mid + 1 , high , arr);

    st[i] = min( st[2*i + 1] , st[2*i + 2] );
}
int getMax(int i , int low, int high , int &left , int &right){
    if( left > high || right < low) return INT_MAX;
    if(low >= left && high <= right) return st[i];

    int mid = low + (high - low) / 2;
    int leftMax = getMax(2*i + 1 , low , mid , left , right);
    int rightMax = getMax(2*i + 2 , mid+1 , high , left , right);
    return min( leftMax , rightMax);
}
int main(){
    int arr[] = {1, 4 , 2, 8 ,6 , 4 , 9 ,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    st.resize(4 * n);
    createSegmentTree( 0 , 0 , n -1 , arr);
    int left , right;
    int q;
    cin>>q;
    while(q--){
        cin>>left>>right;
        cout<<getMax( 0 , 0 , n-1 , left , right);
    }
}