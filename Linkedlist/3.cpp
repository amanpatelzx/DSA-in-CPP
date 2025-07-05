#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    //forming linked list
    a.next=&b;
    b.next=&c;
    c.next=&d;

    Node temp=a;//this right way to print
    while(1){//yaha 1 likhne se ye while loop infinte time chalega 
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp=(*(temp.next));
    }
    // while(1){
    //     cout<<temp<<" "; //isme ye problem hai ki temp pura object hai jo ki print nahi ho sakta 
    //     if(temp.next==NULL) break;
    //     temp=(*(temp.next));
    // }
}