#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int> st;
vector<int> lazy;
void createSegmentTree(int i , int low , int high , int arr[]){
    if(low == high) {
        st[i] = arr[low];
        return;
    }
    int mid = low + (high - low) / 2;
    createSegmentTree(i*2 + 1 , low  , mid , arr);
    createSegmentTree(i*2 + 2 , mid + 1 , high , arr);

    st[i] =  st[2*i + 1] + st[2*i + 2];
}
void updateRange(int i, int low , int high, int &left , int &right, int val){
    //check for pending lazy updates
    if(lazy[i] != 0){
        int rangeSize = high - low + 1;
        st[i] += rangeSize*lazy[i];
        if(low != high){//send lazy to left and right child
            lazy[2*i+1] += lazy[i];
            lazy[2*i+2] += lazy[i];
        }
        lazy[i] = 0;
    }
    if(low > high || right < low) return;
    if(low >= left  && high <= right){
        int rangeSize = high - low + 1;
        st[i] += rangeSize*val;
        if(low != high){
            lazy[2*i+1] += val;
            lazy[2*i+2] += val;
        }
        return;
    }
    int mid = low + (high - low) / 2;
    updateRange(2*i+1 ,low , mid , left , right , val);
    updateRange(2*i+1 , mid+1 , high, left , right , val);
    st[i] = st[2*i+1] + st[2*i+2];
}
int getSum(int i , int low, int high , int &left , int &right){
    //check for pending lazy updates
    if(lazy[i] != 0){
        int rangeSize = high - low + 1;
        st[i] += rangeSize*lazy[i];
        if(low != high){
            lazy[2*i+1] += lazy[i];
            lazy[2*i+2] += lazy[i];
        }
        lazy[i] = 0;
    }
    if( left > high || right < low) return 0;
    if(low >= left && high <= right) return st[i];

    int mid = low + (high - low) / 2;
    int leftSum = getSum(2*i + 1 , low , mid , left , right);
    int rightSum = getSum(2*i + 2 , mid+1 , high , left , right);
    return max( leftSum , rightSum);
}
int main(){
    int arr[] = {1, 4 , 2, 8 ,6 , 4 , 9 ,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    st.resize(4 * n);
    lazy.resize(4 * n, 0 );
    createSegmentTree( 0 , 0 , n -1 , arr);
    int left , right, val;
    cin>>left>>right>> val;
    cout<<getSum( 0 , 0 , n-1 , left , right);
    cout<<endl;
    updateRange(0 , 0 , n-1 , left , right , val);
    cout<<getSum( 0 , 0 , n-1 , left , right);
}