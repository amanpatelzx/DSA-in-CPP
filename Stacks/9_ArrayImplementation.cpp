#include<iostream>
using namespace std;
class stack{
 public: 
     
     int arr[100];//same things you can do with vector;
     int idx;
     stack(){
        idx=-1;
     }
     void push(int val){
        if(idx>=100) cout<<"Stack is Full !\n";
        idx++;
        arr[idx]=val;
     }
     void pop(){
        if(idx==-1) cout<<"Stack is empty !\n";
        idx--;
     }
     int top(){
        return arr[idx]; 
     }
     int size(){
        if(idx==-1) return 0;
        else return (idx+1);
     }
};
int main(){
    stack temp;
    temp.pop();
    temp.push(30);
    temp.push(20);
    temp.push(10);
    temp.push(0);
    temp.push(-10);

    cout<<temp.top();
    cout<<endl;
    cout<<temp.size();
}