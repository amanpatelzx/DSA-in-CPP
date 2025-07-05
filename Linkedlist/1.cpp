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

    cout<<b.next->val<<endl;
    cout<<(*b.next).val;
    // cout<<*(b.next).val<<endl; bhai samajh why ye code nahi chal raha hai
}  //isliye to complier ko lag raha hai ki object ko kaise print karu