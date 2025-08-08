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
void PostDisplay(node* root){//left, right ,root
    if(root==NULL) return;
    PostDisplay(root->left);//call 1
    PostDisplay(root->right);//call 2
    cout<<root->val<<" ";//work ( in order)
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

    PostDisplay(a);
    cout<<endl;
    

}