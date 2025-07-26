#include<iostream>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(int v){
        val = v;
        next = NULL;
    }
};
void insertAtTail(ListNode*& head,ListNode*& tail,int v){
    ListNode* newNode = new ListNode(v);
    if(head==NULL){
        head=tail=newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
}
void printList(ListNode* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main(){
    ListNode* head = NULL;
    ListNode* tail = NULL;
    int n,x;
    cout<<"enter the number of elements : ";
    cin>>n;
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>x;
        insertAtTail(head,tail,x);
    }
    cout<<"your dezire LinkedLists are "<<endl;
    printList(head);
}
