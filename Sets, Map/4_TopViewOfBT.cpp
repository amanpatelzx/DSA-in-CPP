#include<iostream>
#include<queue>
#include<climits>
#include<unordered_map>
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
void TopView(node* root){//understand from here
    queue< pair<node*,int> > qq;
    unordered_map< int, int > m;
    pair<node*,int> p;
    p.first=root;
    p.second=0;
    qq.push(p);
    while(qq.size()>0){
        node* temp=(qq.front()).first;
        int level = (qq.front()).second;
        qq.pop();
        if(m.find(level)==m.end()){
            m[level]=temp->val;
        }
        if(temp->left){
           pair<node*,int> p1;
           p1.first=temp->left;
           p1.second=level-1;
           qq.push(p1);
        }
        if(temp->right){
           pair<node*,int> p2;
           p2.first=temp->right;
           p2.second=level+1;
           qq.push(p2);
        }
    }
    int maxLevel=INT_MIN;
    int minLevel=INT_MAX;
    for(auto ele : m){
        maxLevel=max(maxLevel,ele.first);
        minLevel=min(minLevel,ele.first);
    }
    for(int i=minLevel;i<=maxLevel;i++){
        cout<<m[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    node* root=construct(arr,n);
    displayRoot(root);
    cout<<endl;
   TopView(root);
}