#include<iostream>
using namespace std;
class minHeap{
public:
    int arr[50];
    int idx;
    minHeap(){
        idx=1;
    }
    int top(){
        return arr[1];
    }
    void push(int val){
        int i=idx;
        arr[i]=val;
        int j=i/2;
        while(j>0 && arr[j]>arr[i]){
            int temp = arr[j];
            arr[j]= arr[i];
            arr[i]=temp;
            i=j;
            j=j/2;
        }
        idx++;
    }
    int size(){
        return idx-1;
    }
    void pop() {
    idx--;                   // ek element remove hoga
    arr[1] = arr[idx];       // last element ko root par lao
    int i = 1;

    while (true) {
        int l=2*i;
        int r=2*i+1;
        int smallest=i;
        // left child check
        if (l<idx && arr[l]<arr[smallest]) {
            smallest = l;
        }
        // right child check
        if (r<idx && arr[r]<arr[smallest]) {
            smallest = r;
        }
        // agar koi child chhota hai to swap karo
        if (smallest !=i) {
            swap(arr[i],arr[smallest]);
            i=smallest;
        } else {
            break;  // heap property restore ho gayi
        }
    }
}

};
int main(){
    minHeap pq;
    pq.push(10);
    pq.push(-2);
    pq.push(6);
    pq.push(8);

    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;
}