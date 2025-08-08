#include<iostream>
#include<queue>
using namespace std;
class node{
public:
    int val;
    node* left;
    node* right;
    node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void displayRoot(node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    displayRoot(root->left);
    displayRoot(root->right);
}
int main(){
    int arr[8]={1,2,3,4,5,4,6,7};
    queue<node*> q;
    node* root=new node(arr[0]);
    q.push(root);
    int n=1;
    while(q.size()!=0){
        node* temp=q.front();
        q.pop();
        if(n<8){
            node* l=new node(arr[n]);
            temp->left=l;
            q.push(l);
            n++;
        }
        if(n<8){
            node* r=new node(arr[n]);
            temp->right=r;
            q.push(r);
            n++;
        }
    }
    displayRoot(root);
}