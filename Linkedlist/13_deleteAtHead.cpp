#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class Linklist{//mine made data stucture
    public:
    Node* head;
    Node* tail;
    int size;
    Linklist(){
        head=tail=NULL;
        size=0;
    }
    void insertAtEnd(int n){
        Node* temp=new Node(n);
        if(size==0) head=tail=temp;
        else {
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void insertAtHead(int n){
        Node* temp=new Node(n);
        if(size==0) head=tail=temp;
        else {
            temp->next=head;
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
            temp->next=t;
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
    Linklist ll;
    ll.insertAtEnd(10);
    ll.insertAtEnd(15);
    ll.display();
    cout<<ll.size<<endl;
    ll.insertAtEnd(103);
    ll.insertAtEnd(101);
    ll.display();
    cout<<ll.size<<endl;
    ll.insertAtEnd(133);
    ll.insertAtEnd(30);
    ll.display();
    cout<<ll.size<<endl;
    
    ll.insertAtHead(11111);//insert at begining;
    ll.display();
    cout<<ll.size<<endl;
    
    ll.insertAtAnyIdx(3,24);//insert at begining;
    ll.display();
    cout<<ll.size<<endl;
    // cout<<endl;
    // cout<<endl;
    ll.getAnyElementByIdx(3);
    // // ll.getAnyElementByIdx(5);
    // // ll.getAnyElementByIdx(0);
    // // ll.getAnyElementByIdx(8);
    // // ll.getAnyElementByIdx(2);
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtAnyIdx(3);//interesting unerstand it by yourself;
    ll.display();
    
}//this is to add element in linklist in its tail;