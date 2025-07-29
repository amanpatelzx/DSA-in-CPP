#include<iostream>
#include<vector>
using namespace std;
class Queue{
public:
    vector<int> arr;
    int s;
    int f;
    int b;
    Queue(int x){
     s=0;
     f=0;
     b=0;
     vector<int> v(x);
     arr=v;
    }
    void push(int val){
        arr[b]=val;
        b++;
        s++;
    }
    void pop(){
        if(s==0) cout<<"Queue is empty! ";
        else f++;
        s--;
    }
    int front(){
        if(s==0){
            cout<<"Queue is Empty!! ";
            return -1;
        }
        else return arr[f];
    }
    int back(){
        if(s==0){
            cout<<"Queue is Empty! ";
            return -1;
        }
        return arr[b-1];
    }
    bool empty(){
        if(s==0) return true;
        else return false;
    }
    int size(){
        return s;
    }
    void display(){
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Queue dq(30);
    dq.push(10);
    dq.push(20);
    dq.push(30);
    dq.push(40);
    dq.push(50);

    dq.display();
    
    dq.pop();
    dq.display();

    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
}