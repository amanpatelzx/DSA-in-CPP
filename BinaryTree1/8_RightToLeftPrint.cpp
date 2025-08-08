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
int Level(node* root){
    if(!root) return 0;
    return 1+max(Level(root->left),Level(root->right));
}
void nthLevel(node* root,int curr,int level){
    if(root==NULL) return;
    if(curr==level){
         cout<<root->val<<" ";
         return;
    }
    nthLevel(root->right,curr+1,level);
    nthLevel(root->left,curr+1,level);
}
void LevelRightToLeft(node* root){//left, root ,right
    int n=Level(root);
    for(int i=1;i<=n;i++){
        nthLevel(root,1,i);
        cout<<endl;
    }
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

    LevelRightToLeft(a);
    cout<<endl;
    

}