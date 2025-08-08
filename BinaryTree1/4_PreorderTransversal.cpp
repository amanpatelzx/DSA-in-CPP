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
void preDisplay(node* root){//root, left, right
    if(root==NULL) return;
    cout<<root->val<<" ";//work ( pre order)
    preDisplay(root->left);//call 1
    preDisplay(root->right);//call 2
}
int main(){
    node* a=new node(1);
    node* b=new node(2);
    node* c=new node(3);
    node* d=new node(4);
    node* e=new node(5);
    node* f=new node(6);
     
    a->left=b;//this a is root
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;//this made a binary tree//

    preDisplay(a);
    cout<<endl;
    

}