#include<iostream>
using namespace std;
class node{
public:
    int val;
    node* next;
    node* prev;
    node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

void displayReverse(node* tt){
    node* temp=tt;
    node* tail;
    if(tt->next==NULL) tail=tt;
    while(tt!=NULL){
        tail=tt;
        tt=tt->next;
    }
    while(tail!=NULL){
        cout<<tail->val<<" ";
        tail=tail->prev;
    }
}
int main(){
    node* a= new node(10);
    node* b= new node(20);
    node* c= new node(30);
    node* d= new node(40);
    node* e= new node(50);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    b->prev=a;
    c->prev=b;
    d->prev=c;
    e->prev=d;

    // display(d);
    // cout<<endl;
    displayReverse(b);
    
}