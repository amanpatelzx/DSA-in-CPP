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
class queue{
public:
    node* head;
    node* tail;
    int size;
    queue(){
        size=0;
        head= new node(0);
    }
    void push(int val){
        if(size==0){
            head->val=val;
            tail=head;
        }
        else{
            node* temp=new node(val);
             tail->next=temp;
             tail=temp;
        }
        size++;
    }
    void pop(){
        if(size==0) cout<<"Queue is Already empty ! ";
        else{
            node* temp=head;
            head=head->next;
            size--;
            delete(temp);//waste of memory is less
        }
    }
    int front(){
        return head->val;
    }
};
int main(){
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60); 

    cout<<q.size<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.size<<endl;
    cout<<q.front()<<endl;
}