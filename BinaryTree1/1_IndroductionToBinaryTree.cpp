#include<iostream>//Introduction class;
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
int sumOfBT(node* root){
    if(root==NULL) return 0;
    return root->val+sumOfBT(root->left)+sumOfBT(root->right);
}
int MaxOfBT(node* root){
    if(root==NULL) return INT_MIN;//this becouse, when all element is < 0, then it give zer0 answer
    return max(root->val,max(MaxOfBT(root->left),MaxOfBT(root->right)));
}
int sizeOfBT(node* root){
    if(root==NULL) return 0;
    return 1+sizeOfBT(root->left)+sizeOfBT(root->right);
}
int NoOfLevel(node* root){
    if(root==NULL) return 0;
    return (1+max(NoOfLevel(root->left),NoOfLevel(root->right)));
}
int main(){
    node* a=new node(1);
    node* b=new node(2);
    node* c=new node(3);
    node* d=new node(444);
    node* e=new node(5);
    node* f=new node(6);
     
    a->left=b;//this a is root
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;//this made a binary tree//

    displayRoot(a);
    cout<<endl;
    cout<<"Sum of All the element in BT -> "<<sumOfBT(a);
    cout<<endl;
    cout<<"Size of Binary Tree is -> "<<sizeOfBT(a)<<endl;
    cout<<"Max Element is -> "<<MaxOfBT(a)<<endl;
    cout<<"Max Element is -> "<<NoOfLevel(a)<<endl;

}