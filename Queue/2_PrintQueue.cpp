#include<iostream>
#include<queue>
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
    for(int i=0;i<=n;i++){
        q.push(i);
    }
    display(q);
    cout<<endl;
    display(q);
}