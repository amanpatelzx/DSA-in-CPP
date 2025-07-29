#include<iostream>
#include<queue>//indexing is from front to back eg. 0,1,2,3,4 etc
using namespace std;
void display(queue<int> &q){
    int n=q.size();
    while(n!=0){
    int temp=q.front();
    q.pop();
    cout<<temp<<" ";
    q.push(temp);
    n--;
    }
}
int main(){
    queue<int> q;
    int n;
    cout<<"Enter the no.-> ";
    cin>>n;
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    display(q);
    for(int i=1;i<=n;i++){
        if(i%2==0){
            int temp=q.front();
            q.pop();
            q.push(temp);
        }
        else q.pop();
    }
    cout<<endl;
   display(q);
}