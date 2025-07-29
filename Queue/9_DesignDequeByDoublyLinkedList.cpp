#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class Deque{
    public:
    Node* head;
    Node* tail;
    int size;
    Deque(){
        head=tail=NULL;
        size=0; 
    }
    void pushBack(int n){
        Node* temp=new Node(n);
        if(size==0) head=tail=temp;
        else {
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        size++;
    }
    void pushFront(int n){
        Node* temp=new Node(n);
        if(size==0) head=tail=temp;
        else {
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        size++;
    }
    void popFront(){
        if(size==0){
            cout<<"Its already Emplty ! "<<endl;
            return;
        }
        else if(size==1) head=tail=NULL;
        else {
            head=head->next;
        }
        size--;
    }
    void popBack(){
        if(size==0){
            cout<<"Its already Emplty ! "<<endl;
            return;
        }
        Node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;
        size--;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    int front(){
        if(size==0){
            cout<<"Deque is empty! "<<endl;
            return -1;
        }
        else return head->val;
    }
    int back(){
        if(size==0){
            cout<<"Deque is empty! "<<endl;
            return -1;
        }
        else return tail->val;
    }
    bool empty(){
        if(size==0) return true;
        else return false;
    } 
};
int main(){
    Deque dq;
    dq.pushBack(10);
    dq.pushBack(20);
    dq.pushBack(30);
    dq.pushBack(40);
    dq.pushBack(50);

    dq.display();
    
    dq.popBack();
    dq.display();

    dq.pushFront(5);
    dq.display();

    dq.popFront();
    dq.display();
    cout<<dq.size<<endl;
    cout<<dq.empty()<<endl;
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
} 