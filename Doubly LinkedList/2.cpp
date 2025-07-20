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
class DLL{
    public:
    Node* head;
    Node* tail;
    int size;
    DLL(){
        head=tail=NULL;
        size=0;
    }
    void insertAtEnd(int n){
        Node* temp=new Node(n);
        if(size==0) head=tail=temp;
        else {
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        size++;
    }
    void insertAtHead(int n){
        Node* temp=new Node(n);
        if(size==0) head=tail=temp;
        else {
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        size++;
    }
    void insertAtAnyIdx(int idx,int n){//understand this code deeply
        if(idx<0 || idx>size) cout<<"Invalid index "<<endl;
        else if(idx==0) insertAtHead(n);
        else if(idx==size) insertAtEnd(n);
        else{
            Node* t=new Node(n);
            Node* temp=head;
            for(int i=1;i<idx;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next->prev=t;
            temp->next=t;
            t->prev=temp;
            size++;
        }

    }
    void getAnyElementByIdx(int idx){
        if(idx<0 || idx>=size) cout<<"Invalid Index "<<endl;
        else if(idx==0) cout<<head->val<<endl;
        else if(idx==size-1) cout<<tail->val<<endl;
        else {
            Node* temp=head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;
            }
            cout<<temp->val<<endl;
        }
    }
    void deleteAtHead(){
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
    void deleteAtTail(){
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
    void deleteAtAnyIdx(int idx){
        if(idx<0 || idx>=size) cout<<"Invalid Index "<<endl;
        else if(idx==0) deleteAtHead();
        else if(idx==size-1) deleteAtTail();
        else {
            Node* temp=head;
            for(int i=1;i<idx;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    DLL list;
    list.insertAtHead(5);
    list.insertAtHead(10);
    list.insertAtHead(15);
    list.insertAtHead(20);
    list.insertAtHead(25);
    list.insertAtAnyIdx(4,100);
    list.insertAtEnd(200);

    list.display();
    cout<<endl;
    list.getAnyElementByIdx(5);
}