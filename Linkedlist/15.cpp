#include<iostream>//using pointer
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next=NULL;
    }
};
void display(Node* a){
    Node* temp=a;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
void display1(Node* &a){
    Node* temp=a->next->next;
    Node* t1=new Node(100);
    a->next->next=t1;
    t1->next=temp;
    temp=a;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
void display2(Node* a){
    Node* t1=new Node(100);
    t1->next=a;
    a=t1;
    Node *temp=a;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);

    a->next=b;
    b->next=c;
    c->next=d;

    display(a);
    cout<<endl;
    display2(a);
    cout<<endl;
    display(a);
    cout<<endl;
    cout<<endl;
    cout<<endl;
}//this more optimise way of previouse way of doing