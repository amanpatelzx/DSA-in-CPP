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
class Linklist{
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
    ll.insertAtEnd(1044);
    ll.insertAtEnd(166);
    ll.insertAtEnd(101);
    ll.display();
    cout<<ll.size<<endl;
    ll.insertAtEnd(133);
    ll.insertAtEnd(30);
    ll.insertAtEnd(20);
    ll.display();
    cout<<ll.size<<endl;
    
}//this is to add element in linklist in its tail;