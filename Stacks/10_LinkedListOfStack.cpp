#include<iostream>
using namespace std;
class node{
public:
    int val;
    node* next;
    node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class stack{
public:
    node* head;
    int s;
    stack(){
        this->s=0;
        this->head=NULL;
    }
    void push(int val){
        node* temp=new node(val);
        temp->next=head;
        head=temp;
        s++;
    }
    void pop(){
        if(s==0) cout<<"Stack is empty!\n";
        else head=head->next;
        s--;
    }
    int top(){
        return head->val;
    }
    int size(){
        return s;
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