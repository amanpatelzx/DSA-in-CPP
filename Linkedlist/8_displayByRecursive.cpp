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
void display(Node* head){
    if(head==NULL) return; 
    cout<<head->val<<" ";
    display(head->next);
}
void display1(Node* head){
    if(head==NULL) return; 
    display1(head->next);
    cout<<head->val<<" ";
}
int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);

    a->next=b;
    b->next=c;
    c->next=d;

    display(a);//foucs on this , this is on increseing order
    cout<<endl;
    display1(a);//this is in decreasing order , understand why?
}//this more optimise way of previouse way of doing