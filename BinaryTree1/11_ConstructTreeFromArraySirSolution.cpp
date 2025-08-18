#include<iostream>
#include<queue>
#include<climits>
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
node* construct(int arr[],int n){//understand this method
    queue<node*> q;
    node* root=new node(arr[0]);
    q.push(root);
    int i=1,j=2;
    while(q.size()>0 && i<n){
        node* temp=q.front();
        q.pop();
        node* l;
        node* r;
        if(arr[i]!=INT_MIN) l=new node(arr[i]);
        else l=NULL;
        if(j!=n && arr[j]!=INT_MIN) r=new node(arr[j]);
        else r=NULL;
        temp->left=l;
        temp->right=r;

        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);
        i+=2;
        j+=2;
    }
    return root;
}
void leftBoundry(node* root){
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL) return;
    cout<<root->val<<" ";
    leftBoundry(root->left);
    if(root->left==NULL) leftBoundry(root->right);
}
void BottomBoundry(node* root){
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL) cout<<root->val<<" ";
    BottomBoundry(root->left);
    BottomBoundry(root->right);
}
void RightBoundry(node* root){
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL) return;
    RightBoundry(root->right);
    if(root->right==NULL) RightBoundry(root->left);
    cout<<root->val<<" ";
}
void boundry(node* root){//this according to sir
    leftBoundry(root);
    BottomBoundry(root);
    RightBoundry(root->right);
}
// void boundry(node* root){//this is according to chatgpt
//     if(root == NULL) return;
//     cout << root->val << " "; // Step 1: root
//     leftBoundry(root->left);  // Step 2: left boundary
//     BottomBoundry(root->left); // Step 3: leaves from left subtree
//     BottomBoundry(root->right); // Step 3: leaves from right subtree
//     RightBoundry(root->right); // Step 4: right boundary
// }
int main(){
    int arr[]={1,2,3,4,5,6,INT_MIN,6,INT_MIN,INT_MIN,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    node* root=construct(arr,n);
    displayRoot(root);
    cout<<endl;
    boundry(root);
}