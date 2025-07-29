#include<iostream>
#include<queue>
using namespace std;
void display(queue<int> &q,int n){
    if(n==0) return;
    int temp=q.front();
    q.pop();
    cout<<temp<<" ";
    q.push(temp);
    n--;
    display(q,n);
}
int main(){
    queue<int> q;
    int n;
    cout<<"Enter the no.-> ";
    cin>>n;
    for(int i=0;i<=n;i++){
        q.push(i);
    }
    int a=q.size();
    display(q,a);
    cout<<endl;
    // display(q);
}